#ifndef CHRONIC_PATIENT_H
#define CHRONIC_PATIENT_H

#include <iostream>
#include "Patient.h"
#include <vector>

using namespace std;

class ChronicPatient : public Patient {
private:
    string conditionType;
    string lastCheckupDate;
    string nextRequiredCheckup;
    vector<string> medicationList;

public:
    // Constructors and Destructor
    ChronicPatient();
    ChronicPatient(const string& name, int age, const string& address, const string& phoneNumber,
                   const string& condition);
    virtual ~ChronicPatient();

    // Override virtual methods from base class
    void scheduleAppointment() override;
    void displayPatientInfo() const override;

    // Chronic patient specific methods
    void updateCondition(const string& condition);
    void setNextCheckup(const string& date);
    bool isCheckupDue(const string& currentDate) const;
    void addMedication(const string& medication);
    void removeMedication(const string& medication);

    // Getters
    string getConditionType() const;
    string getLastCheckupDate() const;
    string getNextRequiredCheckup() const;
    vector<string> getMedicationList() const;

    // Setters
    void setLastCheckupDate(const string& date);
};

#endif // CHRONIC_PATIENT_H