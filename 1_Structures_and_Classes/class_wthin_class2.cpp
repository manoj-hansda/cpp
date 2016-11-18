#include <iostream>

using namespace std;

class DateOfBirth
{
        int date;
        int month;
        int year;
    public:
        friend istream & operator >> (istream &, DateOfBirth &);
        friend ostream & operator << (ostream &, DateOfBirth &);
};

class Person
{
        string name;
        int age;
        DateOfBirth day;
    public:
        void setData();
        void getData();
};

void Person :: setData()
{
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter Date of Birth: ";
    cin >> day;
}

void Person :: getData()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "DOB: " << day << endl;
}

istream & operator >> (istream &is, DateOfBirth &d)
{
    cout << "\nDate: ";
    is >> d.date;
    cout << "Month: ";
    is >> d.month;
    cout << "Year: ";
    is >> d.year;
    return is;
}

ostream & operator << (ostream &os, DateOfBirth &d)
{
    os << d.date << "/" << d.month << "/" << d.year << endl;
    return os;
}

int main()
{
    Person P1, P2;

    cout << "Enter details of Person 1: " << endl;
    P1.setData();
    cout << "\nEnter details of Person 2: " << endl;
    P2.setData();

    cout << "\nPerson 1:" << endl;
    P1.getData();
    cout << "Person 2:" << endl;
    P2.getData();
}
