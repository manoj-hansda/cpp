#include <iostream>

using namespace std;

class A {
    public:
        A() {
            cout << "constructor" << endl;
        }
        A(int x) {
            cout << "int type constructor " << x << endl;
        }
        void f1() {
            cout << "no-argument" << endl;
        }
        void f1(int x) {
            cout << "int type argument: " << x << endl;
        }
        void f1(double x) {
            cout << "double type argument: " << x << endl;
        }
        void f1(string x) {
            cout << "string type argument: " << x << endl;
        }
        void f1(int x, double y) {
            cout << "int-double type argument: " << x <<", " << y << endl;
        }
        void f1(double x, int y) {
            cout << "double-int type argument: " << x <<", " << y << endl;
        }
};

int main()
{
    A a1;
    A a2(5);

    a1.f1();
    a1.f1(5);
    a1.f1(5.2);
    a1.f1("hello");
    a1.f1(5, 5.2);
    a1.f1(5.2, 5);
}
