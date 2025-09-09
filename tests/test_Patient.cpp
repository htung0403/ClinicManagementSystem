#include "../include/Patient.h"
#include <iostream>
using namespace std;

int main() {
    // Create Patient objects
    Patient p1("Vo Hoang Tung", 22, "01 Vo Van Ngan", "0901 340 403");
    Patient p2("Nguyen Van A", 28, "02 Nguyen Hue", "0987 654 321");

    // Show patient info
    cout << "Patient 1 Info:" << endl;
    p1.showInfo();
    cout << endl;
    cout << "Patient 2 Info:" << endl;
    p2.showInfo();
    cout << endl;

    // Schedule appointments
    p1.scheduleAppointment();
    p2.scheduleAppointment();
    cout << endl;

    // Add medical history
    p1.addMedicalHistory("Visited for flu symptoms");
    p1.addMedicalHistory("Annual checkup");
    p2.addMedicalHistory("Sprained ankle");
    p2.addMedicalHistory("Blood test");

    // Display medical history
    cout << "Patient 1 Medical History:" << endl;
    vector<string> history1 = p1.getMedicalHistory();
    for (int i = 0; i < history1.size(); ++i) {
        cout << "- " << history1[i] << endl;
    }
    cout << endl;
    cout << "Patient 2 Medical History:" << endl;
    vector<string> history2 = p2.getMedicalHistory();
    for (int i = 0; i < history2.size(); ++i) {
        cout << "- " << history2[i] << endl;
    }
    cout << endl;

    // Update patient info
    p1.setAge(23);
    p1.setAddress("01 Le Van Viet");
    p1.setPhoneNumber("0123 456 789");
    p2.setAge(29);
    p2.setAddress("03 Le Loi");
    p2.setPhoneNumber("0111 222 333");

    cout << "Updated Patient 1 Info:" << endl;
    p1.showInfo();
    cout << endl;
    cout << "Updated Patient 2 Info:" << endl;
    p2.showInfo();
    cout << endl;

    return 0;
}
