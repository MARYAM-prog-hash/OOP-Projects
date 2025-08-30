#ifndef BOOK_H
#define BOOK_H
#include <iostream>

using namespace std;


class Book
{
private:
    string title;
    string author;
    int bookId;
    bool isBorowed;
public:
    Book();
    ~Book();
    Book(string title, string author, int bookId);
    void setTitle(string title);
    void setAuthor(string author);
    void setBookId(int bookId);
    string getTitle();
    string getAuthor();
    int getBookId();
    void borrowBook();
    void returnBook();
    void display();
};

#endif // BOOK_H
