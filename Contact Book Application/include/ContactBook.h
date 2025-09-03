#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include "Contact.h"
#include "PhoneNumber.h"
#include <iostream>

using namespace std;


class ContactBook
{
private:
    Contact contact[50];
    int count;

public:
    ContactBook()
    {
        count=0;
    }

    void addContact(Contact c)
    {
        if(count<50)
        {
            contact[count]=c;
            count++;
        }
        else
        {
            cout<<"ContactBook is full"<<endl;
        }
    }
    void editContact(int id)
    {
        for(int i=0; i<count; i++)
        {
            if(contact[i].getId()==id)
            {
                contact[i].user();
                return;
            }

        }
    }
    int countContact()
    {
        return count;
    }
    void searchContact(int id)
    {
        for(int i=0; i<count; i++)
        {
            if(contact[i].getId()==id)
            {
                contact[i].show();
                return;
            }

        }
        cout<<"It isn't exist"<<endl;
    }
    void deleteContact(int id)
    {
        for(int i=0; i<count; i++)
        {
            if(contact[i].getId()==id)
            {
                contact[i]=contact[count-1];
                count--;
                cout << "We delete the Contact\n";
                return;
            }


        }
        cout<<"Contact isn't founded"<<endl;
    }
    void showAll()
    {
        if(count==0)
        {
            cout<<"No contacts \n";
            return;
        }
        for(int i=0; i<count; i++)
        {
            contact[i].show();
        }
        cout<<endl;
    }


    virtual ~ContactBook(){}
};

#endif // CONTACTBOOK_H
