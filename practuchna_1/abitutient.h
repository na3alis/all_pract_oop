#ifndef ABITUTIENT_H
#define ABITUTIENT_H
#include "iostream"
using namespace std;

class Abitutient
{
private:
    int id;
    string secomd_name;
    string name;
    string fatherly;
    string adress;
    string phone_number;
    float GPA;
public:
    Abitutient();
    ~Abitutient();
    Abitutient(int a, int b);
    Abitutient(const Abitutient &obj);
};

#endif // ABITUTIENT_H
