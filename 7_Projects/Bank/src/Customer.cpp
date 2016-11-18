#include "Customer.h"
#include "functions.h"

Customer :: Customer()
{
    Name = "N/A";
    AccountNo = "1234567890";
    MobileNo = "N/A";
}

void Customer :: signupInterface()
{
    UserName = setUsername();
    Password = setPassword();
    cout << "-- Account created sucessfully! --" << endl
         << "\n1.Show profile \t 2.Log out" << endl;

    int choice = getChoiceAmong(2);

    switch(choice)
    {
        case 1:
            showProfile();
            break;
        case 2:
            logOut(*this);
            break;
    }
}

void Customer :: showProfile()
{
    cout << "****************************************" << endl;
    cout << " Name: " << Name << endl;
    cout << " Account No. " << AccountNo << endl;
    cout << " Balance: Rs." << "1000" << endl;
    cout << " user name: " << UserName << endl;
    cout << " password: " << Password << endl;
    cout << " Mobile No. " << MobileNo << endl;
    cout << "*****************************************" << endl << endl;

    cout << "1. Edit name \t 2. Edit mobile number \t 3. Change password \t 4. Log out" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;

    int option = getChoiceAmong(4);

    switch(option)
    {
        case 1:
            editProfile(_name_);
            break;
        case 2:
            editProfile(_mobile_);
            break;
        case 3:
            editProfile(_pwd_);
            break;
        case 4:
            logOut(*this);
            break;
    }
}

void Customer :: editProfile(int prop)
{
    if(prop == _name_)
    {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, Name);
        cout << "-- Name changed successfully! --" << endl;
    }
    else if(prop == _mobile_)
    {
        cout << "Enter Mobile No. ";
        cin >> MobileNo;
        cout << "-- Mobile Number changed successfully! --" << endl;
    }
    else
    {
        string tmp_password;
        do
        {
            cout << "Enter old password: ";
            cin >> tmp_password;
            if(tmp_password == Password)
            {
                Password = setPassword();
                break;
            }
            else
                cout << "-- Incorrect password! --" << endl;
        } while(tmp_password != Password);

        cout << "-- Password changed successfully! --" << endl;
    }
    showProfile();
}

void Customer :: setDetails(string un, string pwd, string name, string an, string mn)
{
    UserName = un;
    Password = pwd;
    Name = name;
    AccountNo = an;
    MobileNo = mn;
}
