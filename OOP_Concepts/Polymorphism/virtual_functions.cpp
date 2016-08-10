#include <iostream>

using namespace std;

class A {
    public:
         virtual void f1() {
            cout << "base virtual function" << endl;
        }
};

class B : public A {
    public:
        void f1() {
            cout << "derived(B) virtual function" << endl;
        }
};
class C : public A {
    public:

};

int main()
{
    A *p, a1;
    a1.f1();

    B b1;
    p = &b1;
    p->f1();

    C c1;
    p = &c1;
    c1.f1();
}
