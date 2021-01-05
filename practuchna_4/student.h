#ifndef STUDENT_H
#define STUDENT_H
#include "iostream"
using namespace std;

class Student
{
private:
    string faculty;
    string group;
    string course;
public:
    Student();
    virtual void Data();
    virtual void getData();
};

#endif // STUDENT_H
