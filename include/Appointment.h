#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>
#include <iostream>

using namespace std;

class Appointment
{
private:
    static int nextID;
    int appointmentID;
    int patientID;
    int doctorID;
    string date;
    string time;
    string reason;
    string status; // "Scheduled", "Completed", "Canceled"

public:
    // Constructors and Destructor
    Appointment();
    
    Appointment(int patientID, int doctorID, const string &date,
                const string &time, const string &reason);

    ~Appointment();

    // Status management methods
    void updateStatus(const string &newStatus);
    void reschedule(const string &newDate, const string &newTime);
    void cancel();
    void complete();

    // Display method
    void displayAppointmentInfo() const;

    // Validation methods
    bool isValidStatus(const string &status) const;
    bool isScheduled() const;
    bool isCanceled() const;
    bool isCompleted() const;

    // Getters
    int getAppointmentID() const;
    int getPatientID() const;
    int getDoctorID() const;
    string getDate() const;
    string getTime() const;
    string getReason() const;
    string getStatus() const;

    // Setters
    void setDate(const string &newDate);
    void setTime(const string &newTime);
    void setReason(const string &newReason);
};

#endif // APPOINTMENT_H