/* A destructor is a member function that has same name as class but with
   ~(tilde) prefix and run automatically as soon as program ends.
*/

#include <iostream>

using namespace std;

class MyClass
{
    private:
        int x;
    public:
        ~MyClass ()
        {
            cout << "I'm a destructor" << endl;
            cout << "After making an object, I run automatically at "
                 << "the end of program" <<endl;

        }
};

int main()
{
    MyClass c;

    cout << "Enter any key to end program ";
    cin.get();

    return 0;
}
