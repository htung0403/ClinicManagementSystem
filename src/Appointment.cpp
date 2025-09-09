#include "Appointment.h"
#include <iostream>
using namespace std;

int Appointment::nextId = 10001;

Appointment::Appointment() : appointmentId(nextId++), patientId(0), doctorId(0), date(""), time(""), reason(""), status("Scheduled") {}

Appointment::Appointment(int patientId, int doctorId, const string &date, const string &time, const string &reason)
    : appointmentId(nextId++), patientId(patientId), doctorId(doctorId), date(date), time(time), reason(reason), status("Scheduled") {}

Appointment::~Appointment() {}

void Appointment::updateStatus(const string &newStatus) {
    status = newStatus;
}

void Appointment::reschedule(const string &newDate, const string &newTime) {
    date = newDate;
    time = newTime;
}

void Appointment::cancel() {
    status = "Canceled";
}

void Appointment::complete() {
    status = "Completed";
}

void Appointment::showInfo() const {
    cout << "--- Appointment Information ---" << endl;
    cout << "ID: " << appointmentId << endl;
    cout << "Patient ID: " << patientId << endl;
    cout << "Doctor ID: " << doctorId << endl;
    cout << "Date: " << date << endl;
    cout << "Time: " << time << endl;
    cout << "Reason: " << reason << endl;
    cout << "Status: " << status << endl;
}

int Appointment::getAppointmentId() const { return appointmentId; }
int Appointment::getPatientId() const { return patientId; }
int Appointment::getDoctorId() const { return doctorId; }
string Appointment::getDate() const { return date; }
string Appointment::getTime() const { return time; }
string Appointment::getReason() const { return reason; }
string Appointment::getStatus() const { return status; }

void Appointment::setDate(const string &newDate) { date = newDate; }
void Appointment::setTime(const string &newTime) { time = newTime; }
void Appointment::setReason(const string &newReason) { reason = newReason; }
