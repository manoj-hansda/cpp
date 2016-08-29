#include <iostream>

using namespace std;

struct student
{
    string name;
    int roll;
    double marks;
};

int main()
{
    struct student s[10];

    int n, i;

    cout << "Enter number of student: ";
    cin >> n;

    for (i=0; i<n; i++)
    {
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin , s[i].name);
        cout << "Enter roll: ";
        cin >> s[i].roll;
        cout << "Enter marks: ";
        cin >> s[i].marks;
    }

    for (i=0; i<n; i++)
    {
        cout << "Name: " << s[i].name << endl;
        cout << "Roll: " << s[i].roll << endl;
        cout << "Marks: " << s[i].marks << endl;
    }
}
