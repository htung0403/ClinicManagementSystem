#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include <vector>
using namespace std;

class Patient
{
private:
    static int nextId;
    int patientId;
    string name;
    int age;
    string address;
    string phoneNumber;
    vector<string> medicalHistory;

public:
    Patient();
    Patient(const string &name, int age, const string &address, const string &phoneNumber);
    ~Patient();

    virtual void scheduleAppointment();           // Đặt lịch hẹn
    virtual void showInfo() const;                // Hiển thị thông tin bệnh nhân
    void addMedicalHistory(const string &record); // Thêm lịch sử khám

    int getPatientId() const;
    string getName() const;
    int getAge() const;
    string getAddress() const;
    string getPhoneNumber() const;
    vector<string> getMedicalHistory() const;

    void setAge(int newAge);
    void setAddress(const string &newAddress);
    void setPhoneNumber(const string &newPhoneNumber);
};

#endif // PATIENT_H