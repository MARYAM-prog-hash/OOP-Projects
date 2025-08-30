#include <iostream>
#include <PERSON.h>
#include <Student.h>
#include <Teacher.h>
#include <Staff.h>
#include <Classroom.h>
#include <Course.h>
#include <School.h>
using namespace std;
int main()
{
    Staff f("Mariam",19,"Asharqia","Female","mariam@gmail.com","011483957426",145,"cleaning",3200);
    Teacher t("Omar",36,"Cairo","Male","omar@gmail.com","0111187923",12309,"Programming",5990);
    School sc("Al Tamauz","Al Giza","Abdallah Zein");
    sc.print();
    School sch;
    sch.addStaff(f);
    sch.addTeacher(t);
    sch.printStaff();
    sch.printTeachers();


    return 0;
}
