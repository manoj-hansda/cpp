#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

char *getPin();
bool checkPin(char *pin);

int main()
{
    char *PIN = getPin();
    cout<<endl;
    if(checkPin(PIN) == true)
    {
        cout << "welcome";
    }
    else
    {
        cout << "wrong PIN";
    }


    return 0;
}

char * getPin()
{
    static char pin[50];
    int i=0;
    while(1)
    {
        pin[i] = getch();
        if(pin[i] == 13)
            break;
        cout<<"x";
        i++;
    }
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
