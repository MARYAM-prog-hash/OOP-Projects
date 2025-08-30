#ifndef EXAM_H
#define EXAM_H
#include <iostream>
using namespace std;


class Exam
{
private:
    string examName;
    string courseCode;
    string examDate;
public:
    void setExamName(string examName);
    void setCourseCode(string courseCode);
    void setExamDate(string examDate);
    string getExamName();
    string getCourseCode();
    string getExamDate();
    Exam();
    Exam(string examName,string courseCode,string examDate);
    void update(string examName,string courseCode,string examDate);
    void print();
    ~Exam();

};

#endif // EXAM_H
