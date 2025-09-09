#ifndef CLINIC_MANAGER_H
#define CLINIC_MANAGER_H

#include "Patient.h"
#include "ChronicPatient.h"
#include "Doctor.h"
#include "Appointment.h"
#include <vector>
using namespace std;

class ClinicManager
{
private:
    vector<Patient *> patients;
    vector<Doctor *> doctors;
    vector<Appointment *> appointments;

public:
    ClinicManager();
    ~ClinicManager();

    void addRegularPatient(const string &name, int age, const string &address, const string &phoneNumber);
    void addChronicPatient(const string &name, int age, const string &address, const string &phoneNumber, const string &conditionType);
    void addDoctor(const string &name, const string &specialty, const string &phoneNumber);
    void scheduleAppointment(int patientId, int doctorId, const string &date, const string &time, const string &reason);

    void showAllPatients() const;
    void showAllDoctors() const;
    void showAllAppointments() const;
};

#endif // CLINIC_MANAGER_H