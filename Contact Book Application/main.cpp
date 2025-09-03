#include <iostream>
#include "Contact.h"
#include "ContactBook.h"
#include "PhoneNumber.h"


using namespace std;

int main()
{
    ContactBook book;
    int choice;
    do
    {
        cout<<"\n===== Contact Book List =====\n";
        cout<<"1 for Add a new contact\n";
        cout<<"2 for Delete a contact\n";
        cout<<"3 for Edit a contact\n";
        cout<<"4 for Search for a contact\n";
        cout<<"5 for Display all contacts\n";
        cout<<"0 for Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:
        {
            Contact c;
            c.user();
            book.addContact(c);
            break;

        }
        case 2:
        {
            int id;
            cout << "Enter contact ID to delete: ";
            cin >> id;
            book.deleteContact(id);
            break;

        }
        case 3:
        {
            int id;
            cout << "Enter contact ID to edit: ";
            cin >> id;
            book.editContact(id);
            break;

        }
        case 4:
        {
            int id;
            cout << "Enter contact ID to search: ";
            cin >> id;
            book.searchContact(id);
            break;

        }
        case 5:
        {
            book.showAll();
            break;

        }
        case 0:
        {
            cout << "Exiting... \n";
            break;

        }
        default:
        {
            cout << "Invalid choice!\n";
            break;
        }
        }

    }
    while(choice!=0);


    return 0;
}
