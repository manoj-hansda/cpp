#include "Person.h"
#include "functions.h"

Person :: Person(string name, string fName, string mName)
{
    Name = name;
    FatherName = fName;
    MotherName = mName;
}

int Person :: setPassword(string pwd)
{
    Password = pwd;

    int s = 0;
    for(unsigned int i=0; i<Password.length(); i++)
        s = s + Password[i];

    int key = s + Password.length();

    saveKey(Name, key);

    return key;
}

void Person :: showDetails()
{
    cout << "\nName: " << Name << "\tFather's Name: " << FatherName << "\tMother's Name: " << MotherName << endl;
}
