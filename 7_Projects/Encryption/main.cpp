#include <iostream>
#include "Encryptor.h"

using namespace std;

int main()
{
    cout << "\t Data Encryptor" << endl
         << "---------------------------------" << endl;

    string plainText, cypherText, password;

    cout << "Enter any data:" << endl;
    getline(cin, plainText);

    cout << "\nCreate password: ";
    getline(cin, password);

    Encryptor enc;
    enc.setPassword(password);

    cypherText = enc.encrypt(plainText);
    writeFile(cypherText);

    cout << "\n** Data encrypted and saved! **" << endl;

    char cont;
    do
    {
        cout << "\nShow content as: (1).Encrypted Text \t (2).Plain Text" << endl
             << "--------------------------------------------------------" << endl
             << "Enter option: ";

        int option;
        string pwd, contents;
        cin >> option;

        switch(option)
        {
            case 1:
                contents = readFile();
                cout << "\nEncrypted data:" << endl
                     << "-----------------" << endl;
                cout << contents << endl;
                break;
            case 2:
                cout << "Enter password: ";
                cin.ignore();
                getline(cin, pwd);
                if(authenticate(pwd, enc) == true)
                {
                    contents = readFile();
                    plainText = enc.decrypt(contents);
                    cout << "\nDecrypted data:" << endl
                         << "-----------------" << endl;
                    cout << plainText << endl;
                }
                else
                {
                    cout << "wrong Password!";
                }

                break;
            default:
                cout << "\nInvalid option!";
                break;
        }

        cout << "\ncontinue? (y/n): ";
        cin >> cont;
    } while(cont == 'y' || cont == 'Y');


    cin.get();
    return 0;
}
