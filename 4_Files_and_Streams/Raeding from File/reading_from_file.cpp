#include<iostream>
#include<fstream>
using namespace std;

main()
{
    ifstream fObj;
    fObj.open("xyz.txt");

    string line;

    while(fObj >> line)
    {
        cout<<line<<" ";
    }
}
