// Initializing public members of a structure or a class.

#include <iostream>

using namespace std;

class MyClass
{
    public:
        int x;
        double y;

        void showValues()
        {
            cout << "x=" << x << " y=" << y << endl;
        }
};

int main()
{
    MyClass c1 = {3, 5.2};  // initialization list
    MyClass c2 {5, 3.2};    // uniform initialization

    c1.showValues();
    c2.showValues();

    return 0;
}
