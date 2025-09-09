#include "../include/Patient.h"
#include <iostream>
#include "../include/ChronicPatient.h"
using namespace std;

int main()
{
    // Create Patient objects
    Patient p1("Vo Hoang Tung", 22, "01 Vo Van Ngan", "0901 340 403");

    // Create ChronicPatient object
    ChronicPatient cp1("Le Thi B", 40, "10 Tran Hung Dao", "0909 888 777", "Diabetes");

    // Show patient info
    cout << "Patient Info:" << endl;
    p1.showInfo();
    cout << endl;
    cout << "Chronic Patient Info:" << endl;
    cp1.showInfo();
    cout << endl;

    // Schedule appointments
    p1.scheduleAppointment();
    cp1.scheduleAppointment();
    cout << endl;

    // Add medical history
    p1.addMedicalHistory("Visited for flu symptoms");
    p1.addMedicalHistory("Annual checkup");
    cp1.addMedicalHistory("Diabetes checkup");
    cp1.addMedicalHistory("Blood sugar test");

    // Display medical history
    cout << "Patient Medical History:" << endl;
    vector<string> history1 = p1.getMedicalHistory();
    for (int i = 0; i < history1.size(); ++i)
    {
        cout << "- " << history1[i] << endl;
    }
    cout << endl;
    cout << "Chronic Patient Medical History:" << endl;
    vector<string> history3 = cp1.getMedicalHistory();
    for (int i = 0; i < history3.size(); ++i)
    {
        cout << "- " << history3[i] << endl;
    }
    cout << endl;

    // Update patient info
    p1.setAge(23);
    p1.setAddress("01 Le Van Viet");
    p1.setPhoneNumber("0123 456 789");

    // Update chronic patient info
    cp1.setAge(41);
    cp1.setAddress("20 Nguyen Trai");
    cp1.setPhoneNumber("0999 888 777");
    cp1.setLastCheckupDate("10/09/2025");
    cp1.addMedication("Metformin");
    cp1.addMedication("Insulin");

    cout << "Updated Patient Info:" << endl;
    p1.showInfo();
    cout << endl;
    cout << "Updated Chronic Patient Info:" << endl;
    cp1.showInfo();
    cout << endl;

    return 0;
}
