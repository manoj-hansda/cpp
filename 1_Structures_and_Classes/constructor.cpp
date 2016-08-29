/*  A constructor is a member function that has same name as class and no return type,
    and run automatically when an object of that class is created.
*/

#include <iostream>

using namespace std;

class MyClass
{
    private:
        int a;
        double b;
    public:
        // default constructor (no argument)
        MyClass()
        {
            cout << "This is default constructor" << endl;
        }

        // constructor with arguments
        MyClass(int x, double y)
        {
            cout << "This is another constructor" << endl;
            a = x;
            b = y;
        }

        void showValues()
        {
            cout << "a=" << a << " b=" << b << endl;
        }
};

int main()
{
    MyClass c1;
    MyClass c2 (3, 5.2);
    MyClass c3 {3, 5.2};

    c2.showValues();
    c3.showValues();

    cin.get();
    return 0;
}
