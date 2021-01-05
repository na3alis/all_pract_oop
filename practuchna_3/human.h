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
    void getData(string _surname, string _name, string _fatherly , string _address, string _phone_number);
    friend ostream & operator << (ostream &out, Human &ab){
        out << "Surname: " << ab.surname << endl
            << "Name: " << ab.name << endl
            << "Fatherly: " << ab.fatherly << endl
            << "Phone number: "<< ab.phone_number << endl
            << "Address: " << ab.address <<endl;
    }
};

#endif // HUMEN_H
