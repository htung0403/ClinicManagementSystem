#include "../include/Doctor.h"
#include <iostream>
using namespace std;

int main() {
    // Create Doctor objects
    Doctor d1("Dr. Hehe", "Cardiology", "0123 456 789");
    Doctor d2("Dr. Huynh Xuan Phung", "OOP", "0987 654 321");

    // Show doctor info
    cout << "Doctor 1 Info:" << endl;
    d1.showInfo();
    cout << endl;
    cout << "Doctor 2 Info:" << endl;
    d2.showInfo();
    cout << endl;

    // Assign appointments
    d1.assignAppointment(101);
    d1.assignAppointment(102);
    d2.assignAppointment(201);

    // Display appointment lists
    cout << "Doctor 1 Appointments:" << endl;
    vector<int> appts1 = d1.getAppointmentList();
    for (int i = 0; i < appts1.size(); ++i) {
        cout << "- " << appts1[i] << endl;
    }
    cout << endl;
    cout << "Doctor 2 Appointments:" << endl;
    vector<int> appts2 = d2.getAppointmentList();
    for (int i = 0; i < appts2.size(); ++i) {
        cout << "- " << appts2[i] << endl;
    }
    cout << endl;

    // Update doctor info
    d1.setSpecialty("General Medicine");
    d1.setPhoneNumber("0111 222 333");
    cout << "Updated Doctor 1 Info:" << endl;
    d1.showInfo();
    cout << endl;

    return 0;
}
