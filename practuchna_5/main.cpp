#include <iostream>
#include "human.h"
#include "abitutient.h"
#include "student.h"
#include <conio.h>
using namespace std;

int main()
{
    Human text;
    Abitutient ab;

    text.Data();
    text.saveToFile("myFile.txt");

    ab.Data();
    ab.saveToFile("myFile.txt");


    text.loadFromFile("myFile.txt");

    return 0;
}
