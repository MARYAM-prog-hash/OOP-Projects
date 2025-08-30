#ifndef SCHOOL_H
#define SCHOOL_H
#include <Student.h>
#include <Teacher.h>
#include <Staff.h>
#include <Classroom.h>
#include <Course.h>
#include <iostream>
using namespace std;


class School
{
private:
    string schoolName;
    string address;
    string principalName;
    Student students[80];
    Teacher teachers[20];
    Staff staffMembers[55];
    Course courses[15];
    Classroom classrooms[8];
    int studentCounter,teacherCounter,staffCounter,courseCounter,classroomCounter;
public:
    School();
    void setSchoolName(string schoolName);
    void setAddress(string address);
    void setPrincipalName(string principalName);
    string getSchoolName();
    string getAddress();
    string getPrincipalName();
    School(string schoolName,string address,string principalName);
    void update(string schoolName,string address,string principalName);
    void print();
    void addStudents(Student student);
    void addTeacher(Teacher teacher);
    void addStaff(Staff staff);
    void addCourse(Course course);
    void addClassroom(Classroom classroom);
    void printStudents();
    void printTeachers();
    void printStaff();
    void printCourses();
    void printClassrooms();


    ~School();


};

#endif // SCHOOL_H
