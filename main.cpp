#include <iostream>
#include "include/ClinicManager.h"
using namespace std;

int main()
{
    cout << "Welcome to the Small Clinic Management System!" << endl;

    ClinicManager manager;

    // Thêm bệnh nhân thường và mãn tính
    manager.addRegularPatient("Vo Hoang Tung", 22, "01 Vo Van Ngan", "0901 340 403");
    manager.addChronicPatient("Le Thi B", 40, "10 Tran Hung Dao", "0909 888 777", "Diabetes");

    // Thêm bác sĩ
    manager.addDoctor("Dr. Hehe", "Cardiology", "0123 456 789");
    manager.addDoctor("Dr. Huynh Xuan Phung", "OOP", "0987 654 321");

    // Đặt lịch hẹn
    manager.scheduleAppointment(1, 101, "15/09/2025", "09:00", "General Checkup");
    manager.scheduleAppointment(2, 102, "16/09/2025", "10:30", "Blood Pressure Follow-up");

    // Hiển thị danh sách bệnh nhân, bác sĩ, lịch hẹn
    cout << "\n--- Patient List ---" << endl;
    manager.showAllPatients();

    cout << "\n--- Doctor List ---" << endl;
    manager.showAllDoctors();

    cout << "\n--- Appointment List ---" << endl;
    manager.showAllAppointments();

    cout << "\nThank you for using the system!" << endl;
    return 0;
}