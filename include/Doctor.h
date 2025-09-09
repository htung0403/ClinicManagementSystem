#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>
#include <vector>
using namespace std;

class Doctor {
private:
    int doctorId;
    string name;
    string specialty;
    string phoneNumber;
    vector<int> appointmentList;
public:
    Doctor();
    Doctor(const string& name, const string& specialty, const string& phoneNumber);
    ~Doctor();

    void assignAppointment(int appointmentId); // Gán lịch hẹn
    void showInfo() const;                     // Hiển thị thông tin bác sĩ

    int getDoctorId() const;
    string getName() const;
    string getSpecialty() const;
    string getPhoneNumber() const;
    vector<int> getAppointmentList() const;

    void setSpecialty(const string& specialty);
    void setPhoneNumber(const string& phoneNumber);
};

#endif // DOCTOR_H