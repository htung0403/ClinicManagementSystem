#include "ChronicPatient.h"
#include <iostream>
#include <algorithm>
using namespace std;

ChronicPatient::ChronicPatient() : Patient(), conditionType(""), lastCheckupDate("") {}

ChronicPatient::ChronicPatient(const string& name, int age, const string& address, const string& phoneNumber, const string& conditionType)
    : Patient(name, age, address, phoneNumber), conditionType(conditionType), lastCheckupDate("") {}

ChronicPatient::~ChronicPatient() {}

void ChronicPatient::scheduleAppointment() {
    cout << "[ChronicPatient] Regular checkup appointment scheduled for " << getName() << endl;
}

void ChronicPatient::showInfo() const {
    Patient::showInfo();
    cout << "Chronic Condition: " << conditionType << endl;
    cout << "Last Checkup Date: " << lastCheckupDate << endl;
    cout << "Medications: ";
    for (const auto& med : medicationList) cout << med << " ";
    cout << endl;
}

void ChronicPatient::addMedication(const string& medication) {
    medicationList.push_back(medication);
}

void ChronicPatient::removeMedication(const string& medication) {
    medicationList.erase(remove(medicationList.begin(), medicationList.end(), medication), medicationList.end());
}

void ChronicPatient::setLastCheckupDate(const string& date) {
    lastCheckupDate = date;
}

string ChronicPatient::getConditionType() const { return conditionType; }
string ChronicPatient::getLastCheckupDate() const { return lastCheckupDate; }
vector<string> ChronicPatient::getMedicationList() const { return medicationList; }
