#include<iostream>
#include<fstream>
using namespace std;

main()
{
    ofstream fObj("xyz.txt");
    if(fObj.is_open())
    {
        fObj<<"welcome";
        fObj.close();
    }
    else
        cout<<"Error";
}

