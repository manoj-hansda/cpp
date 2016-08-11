#include<iostream>

using namespace std;

class classA
{
private:
    int a;
public:
    int setvalue()
    {
        a = 5;
        return a;
    }
};

int main()
{
    classA obj1;
    cout << obj1.setvalue();
}
