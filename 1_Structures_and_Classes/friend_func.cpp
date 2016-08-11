#include <iostream>

using namespace std;

class A
{
    private:
        int x = 1;
    public:
        int y = 2;

    friend void f1();
};

void f1(A ao)
{
    cout << "I'm freind function of class A, and can access its variables" << endl;
    cout << "y = " << ao.y;
}

int main()
{
    A a1;

    f1(a1);

    return 0;
}
