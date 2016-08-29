#include <iostream>
#include <string.h>
#include "Customer.h"
#include "functions.h"

using namespace std;

int getChoice()
{
    int option;

    do
    {
        cout << "Enter option: ";
        cin >> option;
        if(option != 1 && option != 2)
            cout << "wrong choice! ";
    } while(option != 1 && option != 2);

    return option;
}

void signupInterface()
{
    Customer ca;
    ca.UserName = setUsername();
    ca.Password = setPassword();
    cout << "-- Account created sucessfully! --" << endl
         << "\n1.Show profile \t 2.Log out" << endl;

    int choice = getChoice();

    switch(choice)
    {
        case 1:
            //showProfile();
            break;
        case 2:
            //logOut();
            break;
    }
}

void loginInterface()
{
    string usename, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;
}

string setUsername()
{
    string username;
    //do
    //{
        cout << "\nEnter username: ";
        cin >> username;
        //if(checkAvailibility(username)==false)
        //    cout << "user name already taken!" << endl;
    //} while(checkAvailibility(username)==false);*/

    return username;
}

string setPassword()
{
    string password, tmp_password;
    do
    {
        do
        {
            cout << "\nCreate new password: ";
            cin >> password;
            if(password.length() > 15)
                cout << "-- password should be up to 15 characters! --" << endl;
        } while(password.length() > 15);


        cout << "Re-enter password: ";
        cin >> tmp_password;
        if(tmp_password != password)
            cout << "-- Password did not matched! --\n";
    } while(tmp_password != password);

    return password;
}
