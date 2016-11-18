#include "Encryptor.h"

void Encryptor :: setPassword(string pwd)
{
    Password = pwd;

    int s = 0;
    for(unsigned int i=0; i<Password.length(); i++)
        s = s + Password[i];

    key = s + Password.length();
}

string Encryptor :: encrypt(string d)
{
    string cText = d;

    for(unsigned int i=0; i<d.length(); i++)
        cText[i] = d[i]+key;

    return cText;
}

string Encryptor :: decrypt(string ct)
{
    string pText = ct;

    for(unsigned int i=0; i<ct.length(); i++)
        pText[i] = ct[i]-key;

    return pText;
}


bool authenticate(string pwd, Encryptor e)
{
    if(pwd == e.Password)
        return true;

    else
        return false;
}

void writeFile(string ct)
{
    ofstream fo("data.txt");
    fo << ct;
    fo.close();
}

string readFile()
{
    string data;
    ifstream fo("data.txt");
    getline(fo, data);
    fo.close();

    return data;
}
