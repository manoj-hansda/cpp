#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
using namespace std;

enum Prop {_name_, _mobile_, _pwd_};

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
        void signupInterface();
        void showProfile();
        void editProfile(int);
        void setDetails(string, string, string, string, string);

        friend void showProfile(Customer&);
        friend void logOut(Customer&);
};

#endif
