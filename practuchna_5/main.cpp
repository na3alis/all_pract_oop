#include <iostream>
#include "human.h"
#include "abitutient.h"
#include "student.h"
#include <conio.h>
using namespace std;

int main()
{
    int count = 1;
    int symb = 0;
    int i = 0;
    Human *arr[count];
    Human text;
    Abitutient ab;

//        for(i = 0; i < count; i++)
//        {
//            cout<<"Press 'H' to create class Human or press 'A' to create class Abiturient"<<endl;
//            symb = getch();

//            if (symb == 'H')
//            {
//                arr[i] = new Human();
//                cout << "H"<<endl;
//            }
//            else
//                if (symb == 'A')
//                {
//                    arr[i] = new Abitutient();
//                    cout << "A"<<endl;
//                }
//        }

            text.Data();
            text.saveToFile("myFile.txt");
            ab.Data();
            ab.saveToFile("myFile.txt");


    return 0;
}
