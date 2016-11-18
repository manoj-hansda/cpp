#include<iostream>

using namespace std;

void add(int &x, int &y);

int main()
{
    int a=10, b=20;
    add(a, b);
    cout << "a=" << a << " b=" << b << endl;
}

void add(int &x, int &y)
{
    x=x+5;
    y=y+5;
    cout << "x=" << x << " y=" << y << endl;
}
