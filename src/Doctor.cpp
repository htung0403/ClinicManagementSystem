#include "Doctor.h"
#include <iostream>
using namespace std;

int Doctor::nextId = 1;

Doctor::Doctor() : doctorId(nextId++), name(""), specialty(""), phoneNumber("") {}

Doctor::Doctor(const string &name, const string &specialty, const string &phoneNumber)
    : doctorId(nextId++), name(name), specialty(specialty), phoneNumber(phoneNumber) {}

Doctor::~Doctor() {}

void Doctor::assignAppointment(int appointmentId)
{
    appointmentList.push_back(appointmentId);
}

void Doctor::showInfo() const
{
    cout << "--- Doctor Information ---" << endl;
    cout << "ID: " << doctorId << endl;
    cout << "Name: " << name << endl;
    cout << "Specialty: " << specialty << endl;
    cout << "Phone: " << phoneNumber << endl;
}

int Doctor::getDoctorId() const { return doctorId; }
string Doctor::getName() const { return name; }
string Doctor::getSpecialty() const { return specialty; }
string Doctor::getPhoneNumber() const { return phoneNumber; }
vector<int> Doctor::getAppointmentList() const { return appointmentList; }

void Doctor::setSpecialty(const string &specialty) { this->specialty = specialty; }
void Doctor::setPhoneNumber(const string &phoneNumber) { this->phoneNumber = phoneNumber; }
