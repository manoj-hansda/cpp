/* simple calculator using functions */

#include <iostream>

//function deceleration or prototype
int sum(int, int);
int sub(int, int);
int mul(int, int);
int divi(int, int);

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter 1st No: ";
    cin >> num1;
    cout << "Enter 2nd No: ";
    cin >> num2;

    int option;
    cout << "\nchoose operation" << endl
         << "1.Adiition \t 2.Subtraction" << endl
         << "3.Multiplication \t 4.Division" << endl
         << "Enter Option: ";
    cin >> option;

    switch(option)
    {
        case 1:
            cout << "Sum = " << sum(num1, num2);    // calling fun. sum()
            break;

        case 2:
            cout << "Difference = " << sub(num1, num2); // calling fun. sub()
            break;

        case 3:
            cout << "Product = " << mul(num1, num2);    // calling fun. mul()
            break;

        case 4:
            cout << "Quotient = " << divi(num1, num2);   // calling fun. div()
            break;

        default:
            cout << "Invalid option!";
            break;
    }

    cin.get();
    return 0;
}

// function body or definition
int sum( int x, int y) { return x+y; }
int sub( int x, int y) { return x-y; }
int mul( int x, int y) { return x*y; }
int divi( int x, int y) { return x/y; }
