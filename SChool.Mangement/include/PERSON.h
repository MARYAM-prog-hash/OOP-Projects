#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;


class PERSON
{
private:
    string name;
    int age;
    string address;
    string gender;
    string email;
    string numberphone;
public:
    void setName(string name);
    void setAge(int age);
    void setAddress(string address);
    void setGender(string gender);
    void setEmail(string email);
    void setPhone(string numberphone);
    string getName();
    int getAge();
    string getAddress();
    string getGender();
    string getEmail();
    string getPhone();
    PERSON();
    PERSON(string name,int age,string address,string gender,string email,string numberphone);
    void update(string name,int age,string address,string gender,string email,string numberphone);
    void print();
    ~PERSON();


};

#endif // PERSON_H
