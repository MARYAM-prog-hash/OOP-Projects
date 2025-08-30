#include "PERSON.h"
#include <iostream>
using namespace std;
PERSON::PERSON()
{
   // cout<<"PERSON's Constructor"<<endl;
}

PERSON::~PERSON()
{
   // cout<<"Destroy PERSON"<<endl;
}

void PERSON::setName(string name)
{
    this->name=name;

}
void PERSON::setAge(int age)
{
    this->age=age;
}
void  PERSON::setAddress(string address)
{
    this->address=address;
}
void  PERSON::setGender(string gender)
{
    this->gender=gender;
}
void  PERSON::setEmail(string email)
{
    this->email=email;
}
void  PERSON::setPhone(string numberphone)
{
    this->numberphone=numberphone;
}
string  PERSON::getName()
{
    return name;
}
int  PERSON::getAge()
{
    return age;
}
string  PERSON::getAddress()
{
    return address;
}
string  PERSON::getGender()
{
    return gender;
}
string  PERSON::getEmail()
{
    return email;
}
string  PERSON::getPhone()
{
    return numberphone;
}

PERSON::PERSON(string name,int age,string address,string gender,string email,string numberphone)
{
    this->name=name;
    this->age=age;
    this->address=address;
    this->gender=gender;
    this->email=email;
    this->numberphone=numberphone;
}
void  PERSON::update(string name,int age,string address,string gender,string email,string numberphone)
{
    this->name=name;
    this->age=age;
    this->address=address;
    this->gender=gender;
    this->email=email;
    this->numberphone=numberphone;
}
void  PERSON::print()
{
    cout<<"The Name is:"<<name;
    cout<<"\nThe Age is:"<<age;
    cout<<"\nThe Address is:"<<address;
    cout<<"\nThe Gender is:"<<gender;
    cout<<"\nThe Email is:"<<email;
    cout<<"\nThe Phone Number is:"<<numberphone<<endl;


}


