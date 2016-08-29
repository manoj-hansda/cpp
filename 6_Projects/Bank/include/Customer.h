#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
using namespace std;

class Customer
{
    private:
        string UserName;
        string Password;
        string Name;
        string AccountNo;
        string MobileNo;

    public:
        Customer();
        friend void signupInterface();
        friend void loginInterface();

       // void setDetails();
       // void getDetails();
};

#endif
