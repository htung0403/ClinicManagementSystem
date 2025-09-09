#include <iostream>
#include "Patient.h"
using namespace std;

int Patient::nextId = 1;

Patient::Patient() : patientId(nextId++), name(""), age(0), address(""), phoneNumber("") {}

Patient::Patient(const string &name, int age, const string &address, const string &phoneNumber)
    : patientId(nextId++), name(name), age(age), address(address), phoneNumber(phoneNumber) {}

Patient::~Patient() {}

void Patient::scheduleAppointment()
{
    cout << "[Patient] Appointment has been scheduled for " << name << endl;
}

void Patient::showInfo() const
{
    cout << "--- Patient Information ---" << endl;
    cout << "ID: " << patientId << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: " << phoneNumber << endl;
}

void Patient::addMedicalHistory(const string &record)
{
    medicalHistory.push_back(record);
}

int Patient::getPatientId() const { return patientId; }
string Patient::getName() const { return name; }
int Patient::getAge() const { return age; }
string Patient::getAddress() const { return address; }
string Patient::getPhoneNumber() const { return phoneNumber; }
vector<string> Patient::getMedicalHistory() const { return medicalHistory; }

void Patient::setAge(int newAge) { age = newAge; }
void Patient::setAddress(const string &newAddress) { address = newAddress; }
void Patient::setPhoneNumber(const string &newPhoneNumber) { phoneNumber = newPhoneNumber; }