#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fo;

    fo.open("abc.txt");

    if( fo.is_open() )
        cout << "File abc.txt created" << endl;
    else
        cout << "unable to open file";

    fo.close();
}

