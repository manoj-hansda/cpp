/* member functions can be declared inside class and
   defined outside class with the syntax:
   <returnType> <className> :: <functionName> () { }
*/

#include <iostream>

using namespace std;

class MyClass
{
    private:
        int v1;
        int v2;
    public:
        int setValue(int x, int y);
};

// <returnType> <className> :: <functionName> () { }
int MyClass :: setValue (int x, int y)
{
    v1 = x;
    v2 = y;
    cout << "v1 = " << v1 << endl
         << "v2 = " << v2 << endl;
}

int main()
{
    MyClass c;
    c.setValue(3,5);

    cin.get();
    return 0;
}
