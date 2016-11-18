/*  Operator overloading using friend function  */

#include <iostream>

using namespace std;

class MyClass
{
    private:
        int val;
    public:
        MyClass(int x)  { val = x; }

        void showVal()
        {
            cout << "Obj3.val = " << val;
        }

        friend MyClass operator + (MyClass c1, MyClass c2);
};

// friend function of MyClass which is overloading the binary + operator
MyClass operator + (MyClass c1, MyClass c2)
{
    MyClass tmp(c1.val + c2.val);
    return tmp;
}

int main()
{
    MyClass obj1(3);
    MyClass obj2(5);

    MyClass obj3 = obj1 + obj2;

    obj3.showVal();

    return 0;
}
