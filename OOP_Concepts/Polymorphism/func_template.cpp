#include <iostream>

using namespace std;

template <class T>
T f1(T a, T b) {
    return a+b;
}

int main()
{
    int x=3, y=5, z;
    z = f1(x, y);
    cout << z;
}
