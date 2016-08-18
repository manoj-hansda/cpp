#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fo;
    fo.open("abc.txt");

    if(fo.is_open())
    {
        string data;
        while (fo)
        {
            fo >> data;
            cout << data << endl;
        }


        fo.close();
    }

    else
        cout << "unable to open file";

    cin.get();
    return 0;
}
