#ifndef HUMEN_H
#define HUMEN_H
#include "iostream"
#include "fstream"
using namespace std;

class Human
{
private:
    string surname;
    string name;
    string fatherly;
    string address;
    string phone_number;
    string myFile;
    ifstream fin;
    ofstream fout;
public:
    Human();
    virtual void Data();
    virtual void getData();
    virtual void saveToFile(string _pathToFile);
    virtual void loadFromFile(string _pathToFile);

};

#endif // HUMEN_H
