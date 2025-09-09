#include "../include/Appointment.h"
#include <iostream>
using namespace std;

int main() {
    // Create Appointment objects
    Appointment a1(1, 101, "15/09/2025", "09:00", "General Checkup");
    Appointment a2(2, 102, "16/09/2025", "10:30", "Follow-up");

    // Show appointment info
    cout << "Appointment 1 Info:" << endl;
    a1.showInfo();
    cout << endl;
    cout << "Appointment 2 Info:" << endl;
    a2.showInfo();
    cout << endl;

    // Reschedule appointment 1
    a1.reschedule("17/09/2025", "11:00");
    cout << "Rescheduled Appointment 1 Info:" << endl;
    a1.showInfo();
    cout << endl;

    // Complete appointment 1 and cancel appointment 2
    a1.complete();
    a2.cancel();
    cout << "Updated Appointment 1 Status:" << endl;
    a1.showInfo();
    cout << endl;
    cout << "Updated Appointment 2 Status:" << endl;
    a2.showInfo();
    cout << endl;

    // Update reason for appointment 2
    a2.setReason("Consultation");
    cout << "Updated Appointment 2 Reason:" << endl;
    a2.showInfo();
    cout << endl;

    return 0;
}
