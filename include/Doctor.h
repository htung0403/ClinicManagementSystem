#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;
    
class Doctor {
private:
    int doctorID;
    string name;
    string specialty;
    string contactInfo;
    vector<int> assignedAppointments;

public:
    // Constructors and Destructor
    Doctor();
    Doctor(const string& name, const string& specialty, const string& contact);
    ~Doctor();

    // Appointment management methods
    void assignAppointment(int appointmentID);
    void removeAppointment(int appointmentID);
    bool hasAppointment(int appointmentID) const;

    // Display method
    void displayDoctorInfo() const;

    // Getters
    int getDoctorID() const;
    string getName() const;
    string getSpecialty() const;
    string getContactInfo() const;
    vector<int> getAssignedAppointments() const;
    int getAppointmentCount() const;

    // Setters
    void setSpecialty(const string& specialty);
    void setContactInfo(const string& contact);
};

#endif // DOCTOR_H