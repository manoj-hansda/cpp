#include <iostream>
#include <cassert>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 1st no: ";
    cin >> a;
    cout << "Enter 1st no: ";
    cin >> b;

    assert (b != 0);

    c = a / b;
    cout << "Quotient = " << c;

    cin.get();
    return 0;
}
