#ifndef STAFF_H
#define STAFF_H
#include <PERSON.h>
#include <iostream>
using namespace std;
class Staff:public PERSON
{
private:
    int staffID;
    string role;
    float salary;
public:
    void setStaffID(int staffID);
    void setRole(string role);
    void setSalary(float salary);
    int getStaffID();
    string getRole();
    float getSalary();
    Staff();
    Staff(string name, int age, string address, string gender, string email, string numberphone,int staffID,string role,float salary);
    void update(string name, int age, string address, string gender, string email, string numberphone,int staffID,string role,float salary);
    void print();
    ~Staff();



};

#endif // STAFF_H
