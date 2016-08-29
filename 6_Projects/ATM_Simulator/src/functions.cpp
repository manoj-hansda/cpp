#include <iostream>
#include <conio.h>

using namespace std;

char * getPin()
{
    static char pin[10];
    int i=0;
    while(1)
    {
        pin[i] = getch();
        if(pin[i] == 13)
            break;
        cout<<"x";
        i++;
    }
    pin[i]='\0';
    return pin;
}

bool checkPin(char *pin)
{
    char pwd[5] = "5678";
    int i;
    bool match = true;
    for(i=0; pwd[i]!='\0'; i++)
    {
        if(pin[i] != pwd[i])
            match = false;
    }
    return match;
}

void showMenu()
{
    cout << "\n\n1. Withdraw Amount \t 2. Balance Inquiry" << endl;
    cout << "3. Mini Statement \t 4. Money Transfer\n" << endl;
    cout << "Enter Choice: ";

}

int getChoice()
{
    int ch;
    cin >> ch;
    return ch;
}

void withdraw()
{
    double amount;
    cout << "\nEnter amount: ";
    cin >> amount;
    cout<< "collect your cash";
}

void miniStatement()
{
    cout << "\nUnable to connect to server. Please try again later" << endl;
}

void transfer()
{
    cout << "\nUnable to connect to server. Please try again later" << endl;
}
