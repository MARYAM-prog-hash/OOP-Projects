#ifndef STUDENT_H
#define STUDENT_H
#include <PERSON.h>
#include <iostream>
using namespace std;


class Student:public PERSON
{
private:
    int student_id;
    string grade_level;
    float gpa;
public:
    void setStudent_id(int student_id);
    void setGrade_level(string grade_level);
    void setGpa(float gpa);
    int getStudent_id();
    string getGrade_level();
    float getGpa();
    Student();
   Student(string name, int age, string address, string gender, string email, string numberphone,
        int student_id, string grade_level, float gpa);
    void update(string name,int age,string address,string gender,string email,string numberphone,
                int student_id,string grade_level,float gpa);
    void print();
    ~Student();

};

#endif // STUDENT_H
