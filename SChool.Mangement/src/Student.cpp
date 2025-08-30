#include "Student.h"
#include <iostream>
using namespace std;
Student::Student()
{
   // cout<<"Student's Constructor"<<endl;
}

Student::~Student()
{
    //cout<<"Destroy Student"<<endl;
}

void Student::setStudent_id(int student_id)
{
    this->student_id=student_id;
}
void Student::setGrade_level(string grade_level)
{
    this->grade_level=grade_level;
}
void Student::setGpa(float gpa)
{
    this->gpa=gpa;
}
int Student::getStudent_id()
{
    return student_id;
}
string Student::getGrade_level()
{
    return grade_level;
}
float Student::getGpa()
{
    return gpa;
}

Student:: Student(string name,int age,string address,string gender,string email,string numberphone,
                  int student_id,string grade_level,float gpa)
    :PERSON(name,age,address,gender,email,numberphone)
{
    this->student_id=student_id;
    this->grade_level=grade_level;
    this->gpa=gpa;
}
void Student::update(string name,int age,string address,string gender,string email,string numberphone,
                     int student_id,string grade_level,float gpa)
{
    PERSON::update(name,age,address,gender,email,numberphone);
    this->student_id=student_id;
    this->grade_level=grade_level;
    this->gpa=gpa;
}
void Student::print()
{
    PERSON::print();
    cout<<"The Student ID is:"<<student_id;
    cout<<"\nThe Grade Level is:"<<grade_level;
    cout<<"\nThe Gpa is:"<<gpa<<endl<<endl;
}
