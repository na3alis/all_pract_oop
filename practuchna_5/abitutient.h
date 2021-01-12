#ifndef ABITUTIENT_H
#define ABITUTIENT_H
#include "iostream"
#include "human.h"
#include "fstream"
using namespace std;

class Abitutient : public Human
{
private:
    int id;
    float GPA;
    string myFile;
    ifstream fin;
    ofstream fout;
public:
    Abitutient();
    ~Abitutient();
    Abitutient(int _id, int _gpa);
    Abitutient(const Abitutient &obj);
    virtual void Data();
    virtual void getData();
    virtual void saveToFile(string _pathToFile);
    virtual void loadFromFile(string _pathToFile);
};

#endif // ABITUTIENT_H

