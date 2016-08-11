#include <iostream>
#include "student.h"
#include "functions.h"

int main()
{
    using namespace std;

    student s;

    cout << "STUDENT'S DETAIL BOOK" << endl;
    cout << "---------------------" << endl;
    int option = viewMenu();

    int record=0;
    char cont;

    switch(option)
    {

        case 1:
            do
            {
                s.addRecord();
                record++;
                cout << "continue adding? (press 'y'): ";
                cin >> cont;
            } while(cont == 'y' || cont == 'Y');

            cout << "\n" << record << " record(s) added succesfully." << endl;;
            break;

        case 2:
            s.viewRecords();
            break;

        default:
            cout << "Invalid option!";
            break;
    }

   // cin.clear(); // reset any error flags
   // cin.ignore(32767, '\n'); // ignore any characters in the input buffer until we find an enter character
    cin.get();
    return 0;
}
