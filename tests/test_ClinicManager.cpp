#include "../include/ClinicManager.h"
#include <iostream>
using namespace std;

int main() {
    ClinicManager manager;

    // Add patients
    manager.addRegularPatient("Vo Hoang Tung", 22, "01 Vo Van Ngan", "0901 340 403");
    manager.addChronicPatient("Le Thi B", 40, "10 Tran Hung Dao", "0909 888 777", "Diabetes");

    // Add doctors
    manager.addDoctor("Dr. Hehe", "Cardiology", "0123 456 789");
    manager.addDoctor("Dr. Huynh Xuan Phung", "OOP", "0987 654 321");

    // Schedule appointments
    manager.scheduleAppointment(1, 101, "15/09/2025", "09:00", "General Checkup");
    manager.scheduleAppointment(2, 102, "16/09/2025", "10:30", "Blood Pressure Follow-up");

    // Show all patients
    manager.showAllPatients();
    cout << endl;

    // Show all doctors
    manager.showAllDoctors();
    cout << endl;

    // Show all appointments
    manager.showAllAppointments();
    cout << endl;

    // Test tìm kiếm bệnh nhân theo tên
    cout << "\nTest: Find Patient by Name (Le Thi B)" << endl;
    Patient* p = manager.findPatientByName("Le Thi B");
    if (p) {
        cout << "Found: ";
        p->showInfo();
    } else {
        cout << "Not found!" << endl;
    }

    // Test tìm kiếm bệnh nhân theo ID
    cout << "\nTest: Find Patient by ID (1)" << endl;
    p = manager.findPatientById(1);
    if (p) {
        cout << "Found: ";
        p->showInfo();
    } else {
        cout << "Not found!" << endl;
    }

    // Test tìm kiếm bác sĩ theo tên
    cout << "\nTest: Find Doctor by Name (Dr. Hehe)" << endl;
    Doctor* d = manager.findDoctorByName("Dr. Hehe");
    if (d) {
        cout << "Found: ";
        d->showInfo();
    } else {
        cout << "Not found!" << endl;
    }

    // Test tìm kiếm bác sĩ theo ID
    cout << "\nTest: Find Doctor by ID (102)" << endl;
    d = manager.findDoctorById(102);
    if (d) {
        cout << "Found: ";
        d->showInfo();
    } else {
        cout << "Not found!" << endl;
    }

    // Test tìm kiếm không tồn tại
    cout << "\nTest: Find Patient by Name (Not Exist)" << endl;
    p = manager.findPatientByName("Nguyen Van A");
    if (p) {
        cout << "Found: ";
        p->showInfo();
    } else {
        cout << "Not found!" << endl;
    }

    cout << "\nTest: Find Doctor by ID (999)" << endl;
    d = manager.findDoctorById(999);
    if (d) {
        cout << "Found: ";
        d->showInfo();
    } else {
        cout << "Not found!" << endl;
    }

    return 0;
}
