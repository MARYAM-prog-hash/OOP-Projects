#ifndef CLASSROOM_H
#define CLASSROOM_H
#include <iostream>
using namespace std;


class Classroom
{
private:
    int roomNumber;
    int capacity;
public:
    void setRoomNumber(int roomNumber);
    void setCapacity(int capacity);
    int getRoomNumber();
    int getCapacity();
    Classroom();
    Classroom(int roomNumber,int capacity);
    void update(int roomNumber,int capacity);
    void print();
    ~Classroom();

};

#endif // CLASSROOM_H
