#include <iostream>
#include "Person.h"
#include "functions.h"

using namespace std;

int main()
{
    string name, fatherName, motherName;
    cout << "Please fill in you details:" << endl
         << "---------------------------" << endl;

    cout << " Name:\t\t";
    getline(cin, name);
    cout << " Father's name:\t";
    getline(cin, fatherName);
    cout << " Mother's name:\t";
    getline(cin, motherName);

    Person P(name, fatherName, motherName);

    string password;
    cout << "\nCreate a password (for encryption): ";
    cin >> password;

    int Key = P.setPassword(password);
    encrypt(P, Key);
    cout << "** Data encrypted and saved! **" << endl;

    int option;
    char choice;
    do
    {
        cout << "\nShow details as: \t (1).Encrypted Text \t (2).Plain Text" << endl
             << "--------------------------------------------------------------" << endl
             << "Enter option: ";
        cin >> option;

        switch(option)
        {
            case 1:
                P.showDetails();
                break;
            case 2:
                if(authenticate(P) == true)
                {
                    decrypt(P, Key);
                    P.showDetails();
                }
                else
                    cout << "wrong Password!";
                break;
            default:
                cout << "Invalid option!";
                break;
        }

        cout << "Do you want to continue (y/n): ";
        cin.ignore();
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');

    return 0;
}
