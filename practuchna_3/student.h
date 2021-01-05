#ifndef STUDENT_H
#define STUDENT_H
#include "iostream"
#include "human.h"
using namespace std;

class Student : public Human
{
private:
    string faculty;
    string group;
    string course;
public:
    Student();
    friend ostream & operator << (ostream &out, Student &ab){
        out << "Faculty: " << ab.faculty << endl << "Group: "<< ab.group << endl << "Course: " << ab.course;
    }
};

#endif // STUDENT_H
