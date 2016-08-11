#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fo;
    fo.open("abc.txt", ios::out);

    string data;
    cout << "Enter data: ";
    cin.getline(data, 100);
    fo << data;
    cout << "Data written succesfully";
    void close();

    cin.get();
    return 0;
}
