#include "School.h"
#include <iostream>
using namespace std;

School::School()
{
    studentCounter=0;
    teacherCounter=0;
    staffCounter=0;
    courseCounter=0;
    classroomCounter=0;
}
School::School(string schoolName,string address,string principalName)
{
    this->schoolName=schoolName;
    this->address=address;
    this->principalName=principalName;
}
void School::update(string schoolName,string address,string principalName)
{
    this->schoolName=schoolName;
    this->address=address;
    this->principalName=principalName;

}
void School::print()
{
    cout<<"The School Name is:"<<schoolName<<endl;
    cout<<"The Address is:"<<address<<endl;
    cout<<"The Principal Name is:"<<principalName<<endl<<endl;

}
void School::setSchoolName(string schoolName)
{
    this->schoolName=schoolName;
}
void School::setAddress(string address)
{
    this->address=address;
}
void School::setPrincipalName(string principalName)
{
    this->principalName=principalName;
}
string School::getSchoolName()
{
    return schoolName;
}
string School::getAddress()
{
    return address;
}
string School::getPrincipalName()
{
    return principalName;
}

void School::addStudents(Student student)
{
    if(studentCounter<80)
    {
        students[studentCounter]=student;
        studentCounter++;
    }
    else
    {
        cout<<"The students in this school are full"<<endl;
    }
}
void School::addTeacher(Teacher teacher)
{
    if(teacherCounter<20)
    {
        teachers[teacherCounter]=teacher;
        teacherCounter++;
    }
    else
    {
        cout<<"The teachers in this school are full"<<endl;
    }
}
void School::addStaff(Staff staff)
{
    if(staffCounter<55)
    {
        staffMembers[staffCounter]=staff;
        staffCounter++;
    }
    else
    {
        cout<<"The staff in this school is full"<<endl;
    }
}
void School::addCourse(Course course)
{
    if(courseCounter<15)
    {
        courses[courseCounter]=course;
        courseCounter++;
    }
    else
    {
        cout<<"The courses in this school are full"<<endl;
    }
}
void School::addClassroom(Classroom classroom)
{
    if(classroomCounter<8)
    {
        classrooms[classroomCounter]=classroom;
        classroomCounter++;
    }
    else
    {
        cout<<"The classrooms in this school are full"<<endl;
    }
}
void School::printStudents()
{
    for(int i=0; i<studentCounter; i++)
    {
        students[i].print();
        cout<<endl;
    }
}
void School::printTeachers()
{
    for(int i=0; i<teacherCounter; i++)
    {
        teachers[i].print();
        cout<<endl;
    }
}
void School::printStaff()
{
    for(int i=0; i<staffCounter; i++)
    {
        staffMembers[i].print();
        cout<<endl;
    }
}
void School::printCourses()
{
    for(int i=0; i<courseCounter; i++)
    {
        courses[i].print();
        cout<<endl;
    }
}
void School::printClassrooms()
{
    for(int i=0; i<classroomCounter; i++)
    {
        classrooms[i].print();
        cout<<endl;
    }
}

School::~School()
{
  //  cout<<"Finish"<<endl;
}
