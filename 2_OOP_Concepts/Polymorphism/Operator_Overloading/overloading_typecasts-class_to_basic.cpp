#include <iostream>

using namespace std;

class Points
{
        int val;
    public:
        Points(int x)
        {
            val = x;
        }
        operator int()
        {
            return val;
        }
};

void showPoints(int x)
{
    cout << "Points: " << x;
}

int main()
{
    Points P(100);

    showPoints(P);
}
