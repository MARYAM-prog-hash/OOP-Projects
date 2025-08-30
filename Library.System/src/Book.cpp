#include "Book.h"

Book::Book()
{

}
Book::Book(string title, string author, int bookId)
{
    this->title= title;
    this->author=author;
    this->bookId=bookId;
    isBorowed=false;
}

Book::~Book()
{
    //dtor
}
void Book::setTitle(string title)
{
    this->title=title;
}
void Book::setAuthor(string author)
{
    this->author=author;
}
void Book::setBookId(int bookId)
{
    this->bookId=bookId;
}
string Book::getTitle()
{
    return title;
}
string Book::getAuthor()
{
    return author;
}
int Book::getBookId()
{
    return bookId;
}

void Book::borrowBook()
{
    isBorowed= true;
}
void Book::returnBook()
{
    isBorowed=false;
}
void Book::display()
{
    cout<<"Book ID : "<<bookId<<" | Title : "<<title<<" | Author : "<<author<<" | Status : ";
    if(isBorowed)
    {
        cout<<"Book is Borrowed"<<endl;
    }
    else
    {
        cout<<"Book is AVailable"<<endl;

    }
}
