#include "Teacher.h"
#include <iostream>
using namespace std;
Teacher::Teacher()
{
   // cout<<"Teacher's Constructor"<<endl;
}

Teacher::~Teacher()
{
   // cout<<"Destroy Teacher"<<endl;
}
void Teacher::setTeacherID(int teacherID)
{
    this->teacherID=teacherID;
}
void Teacher::setSubjectSpecialization(string subjectSpecialization)
{
    this->subjectSpecialization=subjectSpecialization;
}
void Teacher::setSalary(float salary)
{
    this->salary=salary;
}
int Teacher::getTeacherID()
{
    return teacherID;
}
string Teacher::getSubjectSpecialization()
{
    return subjectSpecialization;
}
float Teacher::getSalary()
{
    return salary;
}
Teacher::Teacher(string name, int age, string address, string gender, string email, string numberphone,int teacherID,
                 string subjectSpecialization,
                 float salary):PERSON(name,age,address,gender,email,numberphone)
{
    this->teacherID=teacherID;
    this->subjectSpecialization=subjectSpecialization;
    this->salary=salary;
}




void Teacher::update(string name, int age, string address, string gender, string email, string numberphone,int teacherID,
                     string subjectSpecialization,
                     float salary)
{
    PERSON::update(name,age,address,gender,email,numberphone);
    this->teacherID=teacherID;
    this->subjectSpecialization=subjectSpecialization;
    this->salary=salary;



}
void Teacher::print()
{
    PERSON::print();
    cout<<"The TeacherID is:"<<teacherID;
    cout<<"\nThe SubjectSpecialization is:"<<subjectSpecialization;
    cout<<"\nThe Salary is:"<<salary<<endl<<endl;

}
