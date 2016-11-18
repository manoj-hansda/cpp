#include <iostream>

using namespace std;

class DateOfBirth
{
        int date;
        int month;
        int year;
    public:
        void setDOB(int, int, int);
        void getDOB();
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
    int d, m, y;
    cout << "Enter Name: ";  cin >> name;
    cout << "Enter Age: ";  cin >> age;
    cout << "Enter dob: ";   cin >> d >> m >> y;
    day.setDOB(d, m, y);
}

void Person :: getData()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "DOB: ";
    day.getDOB();
}

void DateOfBirth :: setDOB(int d, int m, int y)
{
    date = d;   month = m;   year = y;
}

void DateOfBirth :: getDOB()
{
    cout << date << "/" << month << "/" << year << endl;
}

int main()
{
    Person P1, P2;

    P1.setData();
    P2.setData();

    P1.getData();
    P2.getData();
}
