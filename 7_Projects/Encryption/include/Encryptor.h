#ifndef ENCRYPTOR_H
#define ENCRYPTOR_H

#include <iostream>
#include <fstream>
using namespace std;

class Encryptor
{
    private:
        string Password;
        int key;
    public:
        void setPassword(string);
        string encrypt(string);
        string decrypt(string);

        friend bool authenticate(string, Encryptor);
};

bool authenticate(string pwd, Encryptor e);
void writeFile(string ct);
string readFile();

#endif
