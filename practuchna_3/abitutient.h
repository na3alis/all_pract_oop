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
    friend istream & operator >> (istream &in, Abitutient &ab)
    {
        cout<<"Enter id: ";
        in >> ab.id;
        cout<<"Enter GPA: ";
        in >> ab.GPA;
    };
    friend ostream & operator << (ostream &out, Abitutient &ab)
    {
        out << "id = " << ab.id << endl << "GPA = "<< ab.GPA <<endl<< endl;
    };
};

#endif // ABITUTIENT_H
