#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include "Book.h"
#include "Member.h"
using namespace std;



class Library
{
private:
    int bookCount;
    int memberCount;
    Book books[100];
    Member members[50];

public:
    Library();
    ~Library();
    void addBook(Book book);
    void addMember(Member member);
    void borrowBook(int bookId, int memberId);
    void returnBook(int bookId, int memberId);
    void displayBook();
    void displayMember();
};

#endif // LIBRARY_H
