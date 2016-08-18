#include<iostream>
#include<fstream>
using namespace std;

main()
{
    ofstream fObj;
    fObj.open("abc.txt", ios_base::app);
    fObj<<" here";
}
