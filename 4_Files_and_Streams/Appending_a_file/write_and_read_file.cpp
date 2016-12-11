#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream fo;

    fo.open("abc.txt", ios::out);
    fo << "Hello World";
    fo.close();

    fo.open("abc.txt", ios::in);
    string data;
    fo >> data;
    cout << data;
    fo.close();
}
