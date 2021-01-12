#include "student.h"

Student::Student()
{

}

void Student::Data()
{
    cout<<"Enter faculty: ";
    cin>>faculty;
    cout<<"Enter group: ";
    cin>>group;
    cout<<"Enter course: ";
    cin>>course;
    cout<<endl;
}

void Student::getData()
{
    cout << "Faculty: " << faculty << endl << "Group: "<< group << endl << "Course: " << course <<endl;
}
