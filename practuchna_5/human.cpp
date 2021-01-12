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
}

void Human::getData()
{
    cout << endl << "Surname: " << surname << endl
           << "Name: " << name << endl
           << "Fatherly: " << fatherly << endl
           << "Phone number: " << phone_number << endl
           << "Address: " << address << endl<<endl;
}

void Human::saveToFile(string _pathToFile)
{
    myFile = _pathToFile;
    fout.open(myFile, ofstream::app);

    if(!fout.is_open())
    {
        cout << "Файл не відкрито" << endl;
    }
    else
    {
        fout << "Human" <<", " << name <<", " << surname <<", " << fatherly <<", " << address <<", " << phone_number << ";\n";
    }
    fout.close();
}

void Human::loadFromFile(string _pathToFile)
{
    string str;
    string  line;
    int i = 0;
    int count = 0;
    myFile = _pathToFile;

     //--------------------------
    ifstream file("myFile.txt");
    while (getline(file, line)) {
        count++;
    }

     //--------------------------
     fin.open(myFile);
     if(!fin.is_open())
     {
         cout << "Fail doesn't open" << endl;
     }
     else
     {

         while( i < count)
         {
             ++i;
             getline(fin, str);
             if(str[0] == 'H')
             {
                 cout<<str<<"\n";
             }
             else if(str[0] == 'A') {
                 cout <<"\n";
             }
         }
     }
     fin.close();
}
