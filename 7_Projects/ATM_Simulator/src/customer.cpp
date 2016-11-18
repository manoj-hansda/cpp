#include "customer.h"
#include <string.h>

Customer::Customer(char p[]="1234", double b = 0)
{
     strcpy(pin, p);
     balance = b;
}

double Customer::getBalance()
{
    return balance;
}

bool authenticate(Customer co, char *p)
{
    bool status = false;

    if(strcmp(co.pin, p)==0)
        status = true;

    return status;
}
