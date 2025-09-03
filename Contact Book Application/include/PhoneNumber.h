#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>

using namespace std;


class PhoneNumber
{
private:
    string phone;
    string type;

public:
    PhoneNumber(){}
    PhoneNumber(string phone,string type)
    {
        this->phone=phone;
        this->type=type;
    }
    void setPhone(string phone)
    {
        this->phone=phone;
    }
    void setType(string type)
    {
        this->type=type;
    }
    string getPhone()
    {
        return phone;
    }
    string getType()
    {
        return type;
    }
    void display()
    {
        cout<<"The Phone type is:"<<type<<endl;
        cout<<"The Phone number is:"<<phone<<endl;
    }



    virtual ~PhoneNumber() {}

};

#endif // PHONENUMBER_H
