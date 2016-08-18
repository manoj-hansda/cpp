#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fo;
    fo.open("abc.txt");
    fo << "hello world";
    fo.close();

    cin.get();
    return 0;
}
