#ifndef HUMEN_H
#define HUMEN_H
#include "iostream"
using namespace std;

class Human
{
private:
    string surname;
    string name;
    string fatherly;
    string address;
    string phone_number;
public:
    Human();
    void Data();

    friend ostream & operator << (ostream &out, Human &ab){
        out << "Surname: " << ab.surname << endl
            << "Name: " << ab.surname << endl
            << "Fatherly: " << ab.fatherly << endl
            << "Phone number: "<< ab.phone_number << endl
            << "Address: " << ab.address;
    }
};

#endif // HUMEN_H
