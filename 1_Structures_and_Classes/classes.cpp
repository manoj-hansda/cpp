#include <iostream>

using namespace std;

class Student
{
    public:
        int roll;
        string name;
        double marks;

        void setDetails()
        {
            roll = 5;
            name = "Priya";
            marks = 97.3;
        }
        void viewDetails()
        {
            cout << "student-1:" << endl;
            cout << "roll: " << roll << "\t name: " << name << "\t marks: " << marks << endl;
        }
} s1;

int main()
{
    s1.roll = 3;
    s1.name = "Rahul";
    s1.marks = 93.2;

    Student s2 { 4, "Vikas", 95.3 };

    Student s3;
    s3.setDetails();

    cout << "student-1:" << endl;
    cout << "roll: " << s1.roll << "\t name: " << s1.name << "\t marks: " << s1.marks << endl;

    cout << "student-2:" << endl;
    cout << "roll: " << s2.roll << "\t name: " << s2.name << "\t marks: " << s2.marks << endl;

    s3.viewDetails();

    cin.get();
    return 0;
}
