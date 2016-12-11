#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fo;
    fo.open("abc.txt", ios::ate);

    if( fo.is_open() )
        cout << "File created";
    else
        cout << "unable to open file";

    cout <<fo.tellp();

    fo.close();
}
