#ifndef ABITUTIENT_H
#define ABITUTIENT_H
#include "iostream"
#include "human.h"
using namespace std;

class Abitutient : public Human
{
private:
    int id;
    float GPA;
public:
    Abitutient();
    ~Abitutient();
    Abitutient(int _id, int _gpa);
    Abitutient(const Abitutient &obj);

    friend istream & operator >> (istream &in, Abitutient &ab){
        cout<<"Enter id: ";
        in >> ab.id;
        cout<<"Enter GPA: ";
        in >> ab.GPA;
    }

    friend ostream & operator << (ostream &out, Abitutient &ab){
        out << "ID: " << ab.id << endl << "GPA: "<< ab.GPA << endl;
    }
};

#endif // ABITUTIENT_H
