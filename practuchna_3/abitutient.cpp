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
