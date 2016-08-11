#include "functions.h"
#include <iostream>

using namespace std;

int viewMenu()
{
    int option;
    cout << "\n1. Add new record \t 2. View all records";
    cout << "\nEnter option: ";
    cin >> option;
    return option;
}
