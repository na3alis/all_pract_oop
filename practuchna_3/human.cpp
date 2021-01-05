#include "human.h"

Human::Human()
{

}

void Human::Data()
{
    cout<<"Enter surname: ";
    cin>>surname;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter fatherly: ";
    cin>>fatherly;
    cout<<"Enter phone number: ";
    cin>>phone_number;
    cout<<"Enter address: ";
    cin>>address;
    cout << endl << "Surname: " << surname << endl
            << "Name: " << name << endl
               << "Fatherly: " << fatherly << endl
                  << "Phone number: " << phone_number << endl
                  << "Address: " << address << endl<<endl;

}

