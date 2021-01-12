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

void Abitutient::Data()
{
    cout<<"Enter id: ";
    cin>>id;
    cout<<"Enter GPA: ";
    cin>>GPA;
}

void Abitutient::getData()
{
    cout << "ID: " << id << endl << "GPA: "<< GPA << endl;
}

void Abitutient::saveToFile(string _pathToFile)
{
    myFile = _pathToFile;
    fout.open(myFile, ofstream::app);

    if(!fout.is_open())
    {
        cout << "Fail doesn't open" << endl;
    }
    else
    {
        fout << "Abitutient, " << id <<", " << GPA<< ";\n";
    }
    fout.close();
}

void Abitutient::loadFromFile(string _pathToFile)
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
             if(str[0] == 'A')
             {
                 cout<<str<<"\n";
             }
             else if(str[0] == 'H') {
                 cout <<"\n";
             }
         }
     }
     fin.close();
}
