#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Patient {
protected:
    int patientId;
    string name;
    int age;
    string address;
    string phoneNumber;
    vector<string> medicalHistory;

public:
    // Constructors and Destructor
    Patient();
    Patient(const string &name, int age, bool gender, const string &address, const string &phoneNumber);
    virtual ~Patient();

    // Virtual methods for polymorphism
    virtual void scheduleAppointment();
    virtual void displayPatientInfo() const;

    // Regular methods
    void updateMedicalHistory(const string& record);
    
    // Getters
    int getPatientID() const;
    string getName() const;
    int getAge() const;
    string getAddress() const;
    string getPhoneNumber() const;
    vector<string> getMedicalHistory() const;

    // Setters
    void setAge(int newAge);
    void setAddress(const string& newAddress);
    void setPhoneNumber(const string& newPhoneNumber);
};

#endif // PATIENT_H