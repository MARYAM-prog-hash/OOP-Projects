#include "Staff.h"
#include <iostream>
using namespace std;

Staff::Staff()
{
   // cout<<"Staff's Constructor"<<endl;
}

Staff::~Staff()
{
   // cout<<"Destroy Staff"<<endl;
}
void Staff::setStaffID(int staffID)
{
    this->staffID=staffID;
}
void Staff::setRole(string role)
{
    this->role=role;
}
void Staff::setSalary(float salary)
{
    this->salary=salary;
}
int Staff::getStaffID()
{
    return staffID;
}
string Staff::getRole()
{
    return role;
}
float Staff::getSalary()
{
    return salary;
}
Staff::Staff(string name, int age, string address, string gender, string email, string numberphone,int staffID,string role,float salary)
    :PERSON(name,age,address,gender,email,numberphone)
{
    this->staffID=staffID;
    this->role=role;
    this->salary=salary;

}
void Staff::update(string name, int age, string address, string gender, string email, string numberphone,int staffID,string role,float salary)
{
    PERSON::update(name,age,address,gender,email,numberphone);
    this->staffID=staffID;
    this->role=role;
    this->salary=salary;
}
void Staff::print()
{
    PERSON::print();
    cout<<"The StaffID is:"<<staffID;
    cout<<"\nThe Role is:"<<role;
    cout<<"\nThe Salary is:"<<salary<<endl<<endl;



}
