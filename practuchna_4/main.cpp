#include <iostream>
#include "human.h"
#include "abitutient.h"
#include "student.h"
#include <conio.h>
using namespace std;

int main()
{
    int count = 2;
    Human *arr[count];
    int symb =0;
        int i = 0;

        for(i = 0; i < count; i++)
        {
            cout<<"Press H to create class Data or press A to create class Time"<<endl;
            symb = getch();

            if (symb == 'H')
            {
                arr[i] = new Human();
                cout << "H"<<endl;
            }
            else
                if (symb == 'A')
                {
                    arr[i] = new Abitutient();
                    cout << "A"<<endl;
                }
        }

        for(i = 0; i < count; i++)
        {
            arr[i]->Data();
        }
        for(i = 0; i < count; i++)
        {
            arr[i]->getData();
        }

        delete arr[i];

         getch();
}
