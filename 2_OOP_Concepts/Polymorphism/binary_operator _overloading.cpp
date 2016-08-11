#include <iostream>

using namespace std;

class A {
        int val;
    public:
        A () {}
        A (int x) {
            val = x;
        }
        void showValue(){
            cout << val << endl;
        }
        A operator + (A ao) {
            A tmp;
            tmp = val + ao.val;
            return tmp;
        }
};

int main()
{
    A a1(3);
    A a2(5);
    cout << "a1.val=";
    a1.showValue();
    cout << "a2.val=";
    a2.showValue();

    A a3;
    a3=a1+a2;
    cout << "a3.val=";
    a3.showValue();
}
