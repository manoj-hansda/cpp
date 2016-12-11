#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fo;
    fo.open("abc.txt", ios::app);
    fo << "hello world welcome";
    return 0;
}
