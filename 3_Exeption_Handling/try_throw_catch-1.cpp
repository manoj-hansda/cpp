#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 1st no: ";
    cin >> a;
    cout << "Enter 1st no: ";
    cin >> b;
    try
    {
        if(b == 0) throw "Invalid input! you are trying to divide by 0.";

        c = a / b;
        cout << "Quotient = " << c;

    }
    catch (const char *err)
    {
        cout << err;
    }

    cin.get();
    return 0;
}
