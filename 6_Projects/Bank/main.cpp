#include <iostream>
#include "Customer.h"
#include "functions.h"

using namespace std;

int main()
{
    cout << "\t\t Welcome to ABC Bank " << endl
         << "---------------------------------------------------------" << endl
         << "1.Login (Existing user) \t 2.Sign up (New user)" << endl
         << "---------------------------------------------------------" << endl;

    int option = getChoiceAmong(2);

    switch(option)
    {
        case 1:
            loginInterface();
            break;
        case 2:
            signupInterface();
            break;
    }

    return 0;
}


