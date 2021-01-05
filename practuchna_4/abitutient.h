#define ABITUTIENT_H
#include "iostream"
#include "human.h"
using namespace std;

class Abitutient
{
private:
    int id;
    float GPA;
public:
    Abitutient();
    ~Abitutient();
    Abitutient(int _id, int _gpa);
    Abitutient(const Abitutient &obj);
    virtual void Data();
    virtual void getData();
};

#endif // ABITUTIENT_H

