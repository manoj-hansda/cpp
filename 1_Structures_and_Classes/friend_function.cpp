/*  friend function is a function defined outside class, that can access members
    of that class in which it is declared as 'friend'.

    syntax:     friend <ReturnType> <FunctionName> (parameters ... );
*/

#include <iostream>

using namespace std;

class MyClass
{
    private:
        int v1;
    protected:
        int v2;
    public:
        int v3;
        MyClass(int x, int y, int z )  { v1 = x; v2 = y; v3 = z; }

        friend void myFunc(MyClass c1);  // friend function declaration
};

// friend function definition
void myFunc(MyClass c1)
{
    cout << c1.v1 << endl;
    cout << c1.v2 << endl;
    cout << c1.v3 << endl;
}

int main()
{
    MyClass obj1(1, 2, 3);

    myFunc(obj1);

    return 0;
}
