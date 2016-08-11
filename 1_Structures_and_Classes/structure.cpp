#include <iostream>

using namespace std;

struct student
{
    int roll;
    string name;
    double marks;
} s1;

int main()
{
    s1.roll = 3;
    s1.name = "Rahul";
    s1.marks = 93.2;

    student s2;
    s2.roll = 4;
    s2.name = "Vikas";
    s2.marks = 95.3;

    student s3 { 5, "Priya", 97.3 };

    cout << "student-1:" << endl;
    cout << "roll: " << s1.roll << "\t name: " << s1.name << "\t marks: " << s1.marks << endl;

    cout << "student-2:" << endl;
    cout << "roll: " << s2.roll << "\t name: " << s2.name << "\t marks: " << s2.marks << endl;

    cout << "student-3:" << endl;
    cout << "roll: " << s3.roll << "\t name: " << s3.name << "\t marks: " << s3.marks << endl;

    cin.get();
    return 0;
}
