#include<iostream>
#include<stdlib.h>

using namespace std;

class ClassA {
    public:
        float add( float x, float y)
        {
            return x+y;
        }
        float sub( float x, float y)
        {
            return x-y;
        }
        float mul( float x, float y)
        {
            return x*y;
        }
        float div( float x, float y)
        {
            return x/y;
        }
};

int main()
{
    ClassA obj1;
    float num1, num2;
    int choice;
    char cont;

    do
    {
        system("cls");

        cout << "Enter 1st No: ";
        cin >> num1;
        cout << "Enter 2nd No: ";
        cin >> num2;

        cout << "\nEnter the operation to be performed: \n"
             << "1.Addition \t\t 2.Subtraction \n"
             << "3.Multiplication \t 4.Division \n"
             << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
        case 1:
            cout << "\nSum = " << obj1.add(num1, num2);
            break;

        case 2:
            cout << "\nDifference = " << obj1.sub(num1, num2);
            break;

        case 3:
            cout << "\nProduct = " << obj1.mul(num1, num2);
            break;

        case 4:
            cout << "\nQuotient = " << obj1.div(num1, num2);
            break;

        default:
            cout << "\nInvalid choice!";
            break;
        }

        cout << "\t Continue? (press 'y'): ";
        cin >> cont;
    }
    while(cont=='Y' || cont=='y');

    return 0;
}
