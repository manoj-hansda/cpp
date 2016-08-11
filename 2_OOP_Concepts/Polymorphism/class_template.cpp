#include <iostream>

using namespace std;

template <class T1, class T2>
class A {
    private:
        T1 val1;
        T2 val2;
    public:
        A (T1 x, T2 y) {
            val1 = x;
            val2 = y;
        }
        T2 add() {
            return val1+val2;
        }
};

int main()
{
    A <int, double> a1(3, 5.5);
    cout << a1.add();
}
