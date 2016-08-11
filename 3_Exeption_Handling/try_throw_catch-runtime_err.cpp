#include <iostream>
#include <stdexcept>

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
        if(b == 0) throw runtime_error("Invalid input!");

        c = a / b;
        cout << "Quotient = " << c;

    }
    catch (runtime_error err)
    {
        cout << err.what();
    }

    cin.get();
    return 0;
}
