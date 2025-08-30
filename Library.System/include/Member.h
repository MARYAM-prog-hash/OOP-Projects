#ifndef MEMBER_H
#define MEMBER_H
#include <iostream>

using namespace std;


class Member
{
private:
    string name;
    int memberId;
    int borrowedBook;
public:
    Member();
    ~Member();
    Member(string name, int memberId);
    void setname(string name);
    void setmemberId(int memberId);
    string getname();
    int getmemberId();
    void borrowBook();
    void returnBook();
    void display();
};

#endif // MEMBER_H
