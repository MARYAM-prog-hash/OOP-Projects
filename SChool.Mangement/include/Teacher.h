#ifndef TEACHER_H
#define TEACHER_H
#include <PERSON.h>
#include <iostream>
using namespace std;



class Teacher:public PERSON
{
private:
    int teacherID;
    string subjectSpecialization;
    float salary;
public:
    void setTeacherID(int teacherID);
    void setSubjectSpecialization(string subjectSpecialization);
    void setSalary(float salary);
    int getTeacherID();
    string getSubjectSpecialization();
    float getSalary();
    Teacher();
    Teacher(string name, int age, string address, string gender, string email, string numberphone,int teacherID,
            string subjectSpecialization,
            float salary);
    void update(string name, int age, string address, string gender, string email, string numberphone,int teacherID,
                string subjectSpecialization,
                float salary);
    void print();
    ~Teacher();

};

#endif // TEACHER_H
