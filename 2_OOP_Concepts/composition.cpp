#include<iostream>

using namespace std;

class Birthday
{
private:
    int date;
    int month;
    int year;
public:
    Birthday(int d, int m, int y);
    void printdate();

};

class people
{
private:
    string name;
    Birthday dateOfBirth;
public:
    people(string n, Birthday bo);
    void printinfo();
};

Birthday :: Birthday(int d, int m, int y)
    :date(d), month(m), year(y) {}

void Birthday :: printdate()
    {
        cout << "Date Of Birth: " << date << " " << month << " " << year;
    }

people :: people(string n, Birthday bo)
    :name(n), dateOfBirth(bo) {}

void people :: printinfo()
    {
        cout << "Name: " << name <<endl;
        dateOfBirth.printdate();
    }

main()
{
    Birthday birthObj(1,2,1999);

    people peopleObj("Mukesh", birthObj);

    peopleObj.printinfo();

}
