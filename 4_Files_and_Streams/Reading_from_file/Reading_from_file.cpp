#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fo;
    fo.open("abc.txt");

    string data;

    fo >> data;

    cout << data;

    fo.close();
}
