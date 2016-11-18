#include "Person.h"
#include "functions.h"
#include <fstream>

void saveKey(string name, int key)
{
    ofstream fo;
    fo.open ("pwd.bin", ios::app | ios::binary);
    fo << name << " " << key << endl;
    fo.close();
}

void encrypt(Person &p, int key)
{
    for(unsigned int i=0; i<p.Name.length(); i++)
       p.Name[i] = p.Name[i] + key;

    for(unsigned int i=0; i<p.Name.length(); i++)
       p.FatherName[i] = p.FatherName[i] + key;

    for(unsigned int i=0; i<p.Name.length(); i++)
       p.MotherName[i] = p.MotherName[i] + key;

    writeFile(p);
}

void decrypt(Person &p, int key)
{
    for(unsigned int i=0; i<p.Name.length(); i++)
       p.Name[i] = p.Name[i] - key;

    for(unsigned int i=0; i<p.Name.length(); i++)
       p.FatherName[i] = p.FatherName[i] - key;

    for(unsigned int i=0; i<p.Name.length(); i++)
       p.MotherName[i] = p.MotherName[i] - key;
}

void writeFile(Person &p)
{
    ofstream fo("data.txt", ios::app);
    fo << p.Name << "," <<p.FatherName << "," << p.MotherName << "," << endl;
    fo.close();
}

Person readFile()
{
    string name, fName, mName;
    ifstream fo("data.txt");
    getline(fo, name, ',');
    getline(fo, fName, ',');
    getline(fo, mName, ',');
    Person p(name, fName, mName);
    fo.close();
    return p;
}

bool authenticate(Person &p)
{
    string pwd;
    cout << "Enter password: ";
    cin >> pwd;

    if(pwd == p.Password)
        return true;

    else
        return false;
}
