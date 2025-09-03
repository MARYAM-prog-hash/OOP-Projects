#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include "PhoneNumber.h"
using namespace std;



class Contact
{
private:
    int id;
    string name;
    int gender;
    string city;
    string note;
    PhoneNumber phone[10];
    int countPhone;

public:
    Contact()
    {
        countPhone=0;
    }

    Contact(int id,string name,int gender,string city,string note)
    {
        this->id=id;
        this->name=name;
        this->gender=gender;
        this->city=city;
        this->note=note;
        countPhone=0;
    }


    void setId(int id)
    {
        this->id=id;

    }
    void setName(string name)
    {
        this->name=name;

    }
    void setGender(int gender)
    {
        this->gender=gender;

    }
    void setCity(string city)
    {
        this->city=city;

    }
    void setNote(string note)
    {
        this->note=note;
    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    int getGender()
    {
        return gender;
    }
    string getCity()
    {
        return city;
    }
    string getNote()
    {
        return note;
    }
    void user()
    {
        cout<<"Enter your id:";
        cin>>id;
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter your gender(Note:0=Male,1=Female):";
        cin>>gender;
        cout<<"Enter your city:";
        cin>>city;
        cout<<"Enter your note:";
        cin>>note;
        cout<<"How many phone number(Note: the max is(10)):";
        cin>>countPhone;

        if(countPhone>10)
        {
            countPhone = 10;

        }
        for (int i=0; i<countPhone; i++)
        {
            string pho,typ;
            cout<<"Enter phone number "<<i+1<< ":";
            cin>>pho;
            cout<<"Enter type(home/work/mobile):";
            cin>>typ;
            phone[i]=PhoneNumber(pho,typ);
        }

    }
    bool search(int id)
    {
        return this->id==id;
    }
    void show()
    {
        cout<<"The id is:"<<id<<endl;
        cout<<"The name is:"<<name<<endl;
        cout<<"The gender is:"<<gender<<endl;
        cout<<"The city is:"<<city<<endl;
        cout<<"The note is:"<<note<<endl;
        for (int i=0; i<countPhone; i++)
        {
            phone[i].display();
        }

    }




    virtual ~Contact(){}


};

#endif // CONTACT_H
