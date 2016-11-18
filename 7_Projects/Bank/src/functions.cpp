#include <stdlib.h>
#include <fstream>
#include "Customer.h"
#include "functions.h"

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


void loginInterface()
{
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;

    string d_username, d_password, d_name, d_acc, d_mob;
    bool present = false;
    ifstream fo("data.txt");

    if(!fo.is_open())
    {
        cout << "\n-- Unable to connect to database! --" << endl
             << "Please contact system administrator." << endl;
        exit(1);
    }

    while(fo >> d_username >> d_password >> d_name >> d_acc >> d_mob)
    {
        fo.ignore(1000, '\n');

        if(d_username == username)
        {
            present = true;
            if(d_password == password)
            {
                 cout << "-- Welcome " << d_username << " --" << endl;
                 Customer co;
                 co.setDetails(d_username, d_password, d_name, d_acc, d_mob);
                 co.showProfile();
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

void logOut(Customer &c)
{
    ofstream fo("data.txt", ios::app);
    fo << c.UserName << " " << c.Password << " " << c.Name << " " << c.AccountNo << " " << c.MobileNo << endl;
    fo.close();
}
