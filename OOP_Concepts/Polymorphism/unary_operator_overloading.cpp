#include <iostream>

using namespace std;

class A {
    private:
        int value;
    public:
        A(int x) {
            value = x;
        }
        void showValue() {
            cout <<"value=" << value << endl;
        }
        void operator - () {
            value = -value;
        }
};

int main()
{
    A a1(5);

    a1.showValue();

    -a1;

    a1.showValue();

}
