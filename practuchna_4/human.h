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
    virtual void Data();
    virtual void getData();
};

#endif // HUMEN_H
