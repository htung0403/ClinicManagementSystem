#ifndef CLINIC_MANAGER_H
#define CLINIC_MANAGER_H

#include "Patient.h"
#include "ChronicPatient.h"
#include "Doctor.h"
#include "Appointment.h"
#include <vector>
#include <memory>

class ClinicManager
{
private:
    std::vector<std::unique_ptr<Patient>> patients;
    std::vector<Doctor> doctors;
    std::vector<Appointment> appointments;

public:
    // Constructor and Destructor
    ClinicManager();
    ~ClinicManager();

    // Patient management
    void addRegularPatient(const std::string &name, int age, const std::string &contact);
    void addChronicPatient(const std::string &name, int age, const std::string &contact,
                           const std::string &condition);
    Patient *findPatient(int patientID);
    const Patient *findPatient(int patientID) const;

    // Doctor management
    void addDoctor(const std::string &name, const std::string &specialty,
                   const std::string &contact);
    Doctor *findDoctor(int doctorID);
    const Doctor *findDoctor(int doctorID) const;

    // Appointment management
    int scheduleAppointment(int patientID, int doctorID, const std::string &date,
                            const std::string &time, const std::string &reason);
    bool cancelAppointment(int appointmentID);
    bool completeAppointment(int appointmentID);
    bool rescheduleAppointment(int appointmentID, const std::string &newDate,
                               const std::string &newTime);
    Appointment *findAppointment(int appointmentID);
    const Appointment *findAppointment(int appointmentID) const;

    // Display methods
    void displayAllPatients() const;
    void displayAllDoctors() const;
    void displayAllAppointments() const;
    void displayPatientAppointments(int patientID) const;
    void displayDoctorAppointments(int doctorID) const;

    // Statistics and utility methods
    int getTotalPatients() const;
    int getTotalDoctors() const;
    int getTotalAppointments() const;
    int getScheduledAppointments() const;
    int getCompletedAppointments() const;
    int getCanceledAppointments() const;

    // System operations
    void displaySystemStatus() const;
    void generateReport() const;

private:
    // Helper methods
    bool isValidPatientID(int patientID) const;
    bool isValidDoctorID(int doctorID) const;
    bool isValidAppointmentID(int appointmentID) const;
    void updateDoctorAppointments(int doctorID, int appointmentID, bool add);
};

#endif // CLINIC_MANAGER_H