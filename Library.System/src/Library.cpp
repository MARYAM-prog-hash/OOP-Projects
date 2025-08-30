#include "Library.h"

Library::Library()
{
    bookCount=0;
    memberCount=0;
}

Library::~Library()
{
    //dtor
}
void Library::addBook(Book b)
{

    if(bookCount<100)
    {
        books[bookCount]=b;
        bookCount++;
    }
    else
    {
        cout<<"Library is full"<<endl;
    }
}

void Library::addMember(Member member)
{
    if(memberCount<50)
    {
        members[memberCount]=member;
        memberCount++;
    }
    else
    {
        cout<<"Library is full"<<endl;
    }

}
void Library::borrowBook(int bookId, int memberId)
{
    for(int i=0; i<bookCount; i++)
    {
        if(books[i].getBookId()==bookId)
        {
            for(int j=0; j<memberCount; j++)
            {
                if(members[j].getmemberId()==memberId)
                {
                    books[i].borrowBook();
                    cout<<members[j].getname()<<" borrowed "<<books[i].getTitle()<<endl;
                    return;
                }
            }
        }
    }
    cout<<"Borrowing is failed"<<endl;
}

void Library::returnBook(int bookId,int memberId)
{
    for(int i=0; i<bookCount; i++)
    {
        if(books[i].getBookId()==bookId)
        {
            for(int j=0; j<memberCount; j++)
            {
                if(members[j].getmemberId()==memberId)
                {
                    books[i].returnBook();
                    cout<<members[j].getname()<<" returned "<<books[i].getTitle()<<endl;
                    return;
                }
            }
        }
    }
    cout<<"Not received yet"<<endl;

}
void Library::displayBook()
{
    cout<<"\n--Books in Library--\n";
    for(int i=0; i<bookCount; i++)
    {
        books[i].display();
    }

}
void Library::displayMember()
{
    cout<<"\n--Members in Library--\n";
    for(int i=0; i<memberCount; i++)
    {
        members[i].display();
    }

}
