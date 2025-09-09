#include "ClinicManager.h"
#include <iostream>
using namespace std;

ClinicManager::ClinicManager() {}
ClinicManager::~ClinicManager()
{
    for (auto p : patients)
        delete p;
    for (auto d : doctors)
        delete d;
    for (auto a : appointments)
        delete a;
}

void ClinicManager::addRegularPatient(const string &name, int age, const string &address, const string &phoneNumber)
{
    Patient *p = new Patient(name, age, address, phoneNumber);
    patients.push_back(p);
}

void ClinicManager::addChronicPatient(const string &name, int age, const string &address, const string &phoneNumber, const string &conditionType)
{
    ChronicPatient *cp = new ChronicPatient(name, age, address, phoneNumber, conditionType);
    patients.push_back(cp);
}

void ClinicManager::addDoctor(const string &name, const string &specialty, const string &phoneNumber)
{
    Doctor *d = new Doctor(name, specialty, phoneNumber);
    doctors.push_back(d);
}

void ClinicManager::scheduleAppointment(int patientId, int doctorId, const string &date, const string &time, const string &reason)
{
    Appointment *a = new Appointment(patientId, doctorId, date, time, reason);
    appointments.push_back(a);
}

void ClinicManager::showAllPatients() const
{
    cout << "--- Patient List ---" << endl;
    for (int i = 0; i < patients.size(); ++i)
    {
        patients[i]->showInfo();
    }
}

void ClinicManager::showAllDoctors() const
{
    cout << "--- Doctor List ---" << endl;
    for (int i = 0; i < doctors.size(); ++i)
    {
        doctors[i]->showInfo();
    }
}

void ClinicManager::showAllAppointments() const
{
    cout << "--- Appointment List ---" << endl;
    for (int i = 0; i < appointments.size(); ++i)
    {
        appointments[i]->showInfo();
    }
}
