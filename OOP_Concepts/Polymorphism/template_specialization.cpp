#include <iostream>

using namespace std;

template <class T>
class A {
    private:
        T val;
    public:
        A (T x) {
            val = x;
        }
        void showValue() {
            cout << val << " is a number" <<endl;
        }
};
template <>
class A <char> {
    private:
        char val;
    public:
        A (char x) {
            val = x;
        }
        void showValue() {
            cout << val << " is a character" << endl;
        }
};

int main()
{
    A <int> a1(3);
    a1.showValue();

    A <char> a2('c');
    a2.showValue();
}
