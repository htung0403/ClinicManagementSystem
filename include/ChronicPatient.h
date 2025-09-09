#ifndef CHRONIC_PATIENT_H
#define CHRONIC_PATIENT_H

#include "Patient.h"
#include <string>
#include <vector>
using namespace std;

class ChronicPatient : public Patient {
private:
    string conditionType;
    string lastCheckupDate;
    vector<string> medicationList;
public:
    ChronicPatient();
    ChronicPatient(const string& name, int age, const string& address, const string& phoneNumber, const string& conditionType);
    ~ChronicPatient();

    void scheduleAppointment() override; // Đặt lịch hẹn định kỳ
    void showInfo() const override;      // Hiển thị thông tin bệnh nhân mãn tính
    void addMedication(const string& medication); // Thêm thuốc
    void removeMedication(const string& medication); // Xóa thuốc
    void setLastCheckupDate(const string& date);

    string getConditionType() const;
    string getLastCheckupDate() const;
    vector<string> getMedicationList() const;
};

#endif // CHRONIC_PATIENT_H