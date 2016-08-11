#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout << "Enter marks: ";
    cin >> marks;
    try
    {
        if(marks < 0)   throw -1;
        if(marks > 100) throw 2;

        if(marks >= 40)
            cout << "Pass";
        else
            cout << "Fail";
    }
    catch (int err_code)
    {
        cout << "Invalid marks! ";
        if (err_code == -1) cout << "entered marks is less than 0.";
        if (err_code == 2) cout << "entered marks is greater than 100.";
    }

    cin.get();
    return 0;
}
