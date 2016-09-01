#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include "Customer.h"
#include "functions.h"

using namespace std;

int getChoiceAmong(int n)
{
    int option;

    do
    {
        cout << "Enter option: ";
        cin >> option;
        if(option < 1 || option > n)
            cout << "wrong choice! ";
    } while(option < 1 || option > n);

    return option;
}

void signupInterface()
{
    Customer ca;
    ca.UserName = setUsername();
    ca.Password = setPassword();
    cout << "-- Account created sucessfully! --" << endl
         << "\n1.Show profile \t 2.Log out" << endl;

    int choice = getChoiceAmong(2);

    switch(choice)
    {
        case 1:
            showProfile(ca);
            break;
        case 2:
            logOut(ca);
            break;
    }
}

void loginInterface()
{
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    string d_username, d_password;
    bool present = false;
    ifstream fo("data.txt");

    if(!fo.is_open())
    {
        cout << "\n-- Unable to connect to database! --" << endl
             << "Please contact system administrator." << endl;
        exit(1);
    }

    while(true)
    {
        fo >> d_username;
        fo >> d_password;
        fo.ignore(1000, '\n');

        if(d_username == username)
        {
            present = true;
            if(d_password == password)
            {
                 cout << "-- Welcome --";
            }
            else
            {
                 cout << "-- Wrong password! --";
            }
            break;
        }

        if(fo.eof())
            break;
    }

        if(present == false)
        {
             cout << "-- User not exists! --";
        }

    fo.close();
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

void showProfile(Customer co)
{
    cout << "****************************************" << endl;
    cout << " Name: " << co.Name << endl;
    cout << " Account No. " << co.AccountNo << endl;
    cout << " Balance: Rs." << "1000" << endl;
    cout << " user name: " << co.UserName << endl;
    cout << " password: " << co.Password << endl;
    cout << " Mobile No. " << co.MobileNo << endl;
    cout << "*****************************************" << endl << endl;

    cout << "1. Edit name \t 2. Edit mobile number \t 3. Change password \t 4. Log out" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;

    int option = getChoiceAmong(4);

    switch(option)
    {
        case 1:
            //editName();
            break;
        case 2:
            //editMobile();
            break;
        case 3:
            //changePassword();
            break;
        case 4:
            //logOut();
            break;
    }
}

void logOut(Customer co)
{
    ofstream fo("data.txt", ios::app);
    fo << co.UserName << " " << co.Password << " " << co.Name << " " << co.AccountNo << " " << co.MobileNo << endl;
    fo.close();
}
