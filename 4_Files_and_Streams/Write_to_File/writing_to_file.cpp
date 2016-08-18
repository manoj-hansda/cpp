#include<iostream>
#include<fstream>
using namespace std;

main()
{
    ofstream fObject;
    fObject.open("abc.txt");
    fObject<<"hello world";
    fObject.close();
}
