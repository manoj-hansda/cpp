#include <iostream>
#include <fstream>

using namespace std;

class Encryptor
{
    private:
        string Password;
        int key;
    public:
        void setPassword(string);
        string encrypt(string);
        string decrypt(string);

        friend bool authenticate(string, Encryptor);
};

void Encryptor :: setPassword(string pwd)
{
    Password = pwd;

    int s = 0;
    for(int i=0; i<Password.length(); i++)
        s = s + Password[i];

    key = s + Password.length();
}

string Encryptor :: encrypt(string d)
{
    string cText = d;

    for(int i=0; i<d.length(); i++)
        cText[i] = d[i]+key;

    return cText;
}

string Encryptor :: decrypt(string ct)
{
    string pText = ct;

    for(int i=0; i<ct.length(); i++)
        pText[i] = ct[i]-key;

    return pText;
}

bool authenticate(string pwd, Encryptor e)
{
    if(pwd == e.Password)
        return true;

    else
        return false;
}

void writeFile(string ct)
{
    ofstream fo("data.txt");
    fo << ct;
    fo.close();
}

string readFile()
{
    string data;
    ifstream fo("data.txt");
    getline(fo, data);
    fo.close();

    return data;
}

int main()
{

    string plainText, cypherText, password;

    cout << "Enter any data:" << endl;
    getline(cin, plainText);

    cout << "\nCreate password: ";
    getline(cin, password);

    Encryptor enc;
    enc.setPassword(password);

    cypherText = enc.encrypt(plainText);
    writeFile(cypherText);

    cout << "\n-- Data encrypted and saved --" << endl;

    char cont;
    do
    {
        cout << "\nShow content as: (1).Encrypted Text \t (2).Plain Text" << endl
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
