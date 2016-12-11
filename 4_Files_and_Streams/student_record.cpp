#include <iostream>
#include <fstream>
using namespace std;

struct Student
{
    string Name;
    int Roll;
    double Marks;

};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    struct Student s[n];

    for(int  i=0; i<n; i++)
    {
        cin.ignore();
        cout << "\nEnter details of student " << i+1 << ":" << endl;
        cout << "Name: ";
        getline(cin, s[i].Name);
        cout << "Roll: ";
        cin >> s[i].Roll;
        cout << "Marks: ";
        cin >> s[i].Marks;

        ofstream fo("studentData.txt", ios::app);
        fo << s[i].Name << ", " << s[i].Roll << " " << s[i].Marks << endl;
        fo.close();
    }

    string name;
    int roll;
    double marks;

    ifstream fi("studentData.txt");

    while(true)
    {
        getline(fi, name, ',');
        fi >> roll;
        fi >> marks;

        if(fi.eof()) break;

        cout << name << " " << roll << " " << marks << endl;
    }

    fi.close();
}
