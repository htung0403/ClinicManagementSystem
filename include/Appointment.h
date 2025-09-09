#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>
using namespace std;

class Appointment
{
private:
    static int nextId;
    int appointmentId;
    int patientId;
    int doctorId;
    string date;
    string time;
    string reason;
    string status; // "Scheduled", "Completed", "Canceled"
public:
    Appointment();
    Appointment(int patientId, int doctorId, const string &date, const string &time, const string &reason);
    ~Appointment();

    void updateStatus(const string &newStatus);                    // Đổi trạng thái
    void reschedule(const string &newDate, const string &newTime); // Đổi ngày giờ
    void cancel();                                                 // Hủy lịch hẹn
    void complete();                                               // Hoàn thành lịch hẹn
    void showInfo() const;                                         // Hiển thị thông tin lịch hẹn

    int getAppointmentId() const;
    int getPatientId() const;
    int getDoctorId() const;
    string getDate() const;
    string getTime() const;
    string getReason() const;
    string getStatus() const;

    void setDate(const string &newDate);
    void setTime(const string &newTime);
    void setReason(const string &newReason);
};

#endif // APPOINTMENT_H