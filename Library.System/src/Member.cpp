#include "Member.h"

Member::Member()
{

}

Member::~Member()
{

}

Member::Member(string name, int memberId)
{
    this->name=name;
    this->memberId=memberId;
    borrowedBook=0;

}
void Member::setname(string name)
{
    this->name=name;
}
void Member::setmemberId(int memberId)
{
    this->memberId=memberId;

}
string Member::getname()
{
    return name;

}
int Member::getmemberId()
{
    return memberId;
}

void Member::borrowBook()
{
    borrowedBook++;
}
void Member::returnBook()
{
    borrowedBook--;
}
void Member::display()
{
    cout<<"Member ID : "<<memberId<<" | Name : "<<name<<" | Number Of book (Borrowed) : "<<borrowedBook<<endl;

}
