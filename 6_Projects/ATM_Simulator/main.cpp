#include <iostream>
#include "customer.h"
#include "functions.h"

using namespace std;

int main()
{
    Customer c1("1234", 10000);
    cout << "Welcome to ABC Bank ATM";
    showMenu();
    int choice = getChoice();
    static char *pin;
    if(choice >= 1 && choice <= 4)
    {
        cout << "Enter your PIN: ";
        pin = getPin();
        if(authenticate(c1, pin)==true)
        {
            switch(choice)
            {
                case 1:
                    withdraw();
                    break;
                case 2:
                    cout << "\nAvailable Balance: Rs." << c1.getBalance();
                    break;
                case 3:
                    miniStatement();
                    break;
                case 4:
                    transfer();
                    break;
            }
        }
        else
        {
            cout << "\nWrong PIN";
        }

    }
    else
        cout << "Invalid choice";

    cin.get();
    return 0;
}
