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

    return 0;
}
