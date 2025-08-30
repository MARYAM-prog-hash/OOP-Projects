#include <iostream>
#include "Library.h"
#include "Member.h"
#include "Book.h"

using namespace std;




int main()
{
     Library L;
     L.addBook(Book("c++ programming", "Kian",2));
     L.addBook(Book("Data Structure programming", "Dina",1));
     L.addMember(Member("Shahd",1));
     L.addMember(Member("Sama",5));
     L.displayBook();
     L.displayMember();
     cout<<"\n\t\t\t\t <<Borrowing>> \n";
     L.borrowBook(2, 1);
     cout<<"\n\t\t\t\t <<returning>> \n";
     L.returnBook(1,5);







    return 0;
}
