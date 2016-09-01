#include <iostream>

using namespace std;

class Mother
{
public:
    void sayName();
};

void Mother :: sayName() {
    cout << "This is sayname method of class mother ";
}

class Daughter : public Mother {
public:
};

main()
{
    Mother m;
    m.sayName();

    Daughter d;
    d.sayName();

    return 0;
}
