#include "abitutient.h"

Abitutient::Abitutient()
{

}

Abitutient::~Abitutient()
{

}

Abitutient::Abitutient(int _id, int _gpa)
{
       id = _id;
       GPA = _gpa;
}

Abitutient::Abitutient(const Abitutient &obj)
{
    id = obj.id;
    GPA = obj.GPA;
}

void Abitutient::Data()
{
    cout<<"Enter id: ";
    cin>>id;
    cout<<"Enter GPA: ";
    cin>>GPA;
}

void Abitutient::getData()
{
    cout << "ID: " << id << endl << "GPA: "<< GPA << endl;
}
