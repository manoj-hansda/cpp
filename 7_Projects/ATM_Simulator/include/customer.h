#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
using namespace std;

class Customer
{
    private:
        char pin[10];
        double balance;
    public:
        Customer(char p[], double d);
        double getBalance();
        friend bool authenticate(Customer co, char *p);
};

#endif
