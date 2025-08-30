#include "Exam.h"
#include <iostream>
using namespace std;

Exam::Exam()
{
    //cout<<"EXAM's Constructor"<<endl;
}

void Exam::setExamName(string examName)
{
    this->examName=examName;
}
void Exam::setCourseCode(string courseCode)
{
    this->courseCode=courseCode;
}
void Exam::setExamDate(string examDate)
{
    this->examDate=examDate;
}
string Exam::getExamName()
{
    return examName;
}
string Exam::getCourseCode()
{
    return courseCode;
}
string Exam::getExamDate()
{
    return examDate;
}
Exam::Exam(string examName,string courseCode,string examDate)
{
    this->examName=examName;
    this->courseCode=courseCode;
    this->examDate=examDate;

}
void Exam::update(string examName,string courseCode,string examDate)
{
    this->examName=examName;
    this->courseCode=courseCode;
    this->examDate=examDate;

}
void Exam::print()
{
    cout<<"The Exam Name is:"<<examName<<endl;
    cout<<"The Course Code is:"<<courseCode<<endl;
    cout<<"The Exam Data is:"<<examDate<<endl;

}

Exam::~Exam()
{
   // cout<<"Destroy EXAM"<<endl;
}
