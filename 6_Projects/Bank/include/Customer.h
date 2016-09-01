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

        friend void showProfile(Customer);
        friend void logOut(Customer co);

       // void setDetails();
       // void getDetails();
};

#endif
