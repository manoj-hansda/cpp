#include <iostream>

using namespace std;

class Myclass
{
        int val;
    public:
        Myclass(int x)
        {
            val = x;
        }
        void show()
        {
            cout << val;
        }
};

int main()
{
    int a = 100;
    Myclass c = a;
    c.show();
}
