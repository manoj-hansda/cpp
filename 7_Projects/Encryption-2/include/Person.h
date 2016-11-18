#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person
{
    private:
        string Name;
        string FatherName;
        string MotherName;
        string Password;
    public:
        Person(string, string, string);
        int setPassword(string);
        void showDetails();

        friend void encrypt(Person &p, int);
        friend void decrypt(Person &p, int);
        friend void writeFile(Person &p);
        friend bool authenticate(Person &p);
};

#endif
