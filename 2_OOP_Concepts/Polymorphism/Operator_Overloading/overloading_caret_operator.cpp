#include <iostream>

using namespace std;

class MyClass
{
    private:
        int a;
    public:
        MyClass(){};
        MyClass( int x ) { a = x; }
        void showVal()
        {
            cout << a << endl;
        }
        friend MyClass operator ^ (MyClass ca, MyClass cb);


};

MyClass operator ^ (MyClass ca, MyClass cb)
{
    MyClass tmp;
    tmp.a = 1;
    while(cb.a--)
    {
        tmp.a = tmp.a * ca.a;
    }
    return tmp;
}


int main()
{
    MyClass c1(2);
    MyClass c2(3);

    c1.showVal();
    c2.showVal();

    MyClass c3;
    c3 = (c1^c2);

    c3.showVal();

    return 0;
}
