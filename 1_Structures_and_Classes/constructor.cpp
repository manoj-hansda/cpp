/* A constructor is a member function that has same name as class and
   run automatically when an object of that class is created.
*/

#include <iostream>

using namespace std;

class MyClass
{
    private:
        int x;
    public:
        MyClass ()
        {
            cout << "I'm a constructor" << endl;
            cout << "I run automatically as soon as "
                 << "object(c) of myClass is created";

        }
};

int main()
{
    MyClass c;

    cin.get();
    return 0;
}
