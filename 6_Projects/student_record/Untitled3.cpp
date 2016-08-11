#include<iostream>
#include<stdlib.h>

using namespace std;

class ClassA {
    public:
        void add( float x)
        {
            x=3;
            cout << x;
        }
        float x=5;

};

int main()
{
    ClassA obj1;

    cout<<obj1.x;

    return 0;
}
