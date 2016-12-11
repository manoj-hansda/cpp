#include <iostream>

using namespace std;
class Paise
{
        int Pval;
    public:
        Paise(int x) { Pval = x; }
        operator int()
        {
            return Pval;
        }
};
class Rupees
{
        int Rval;
    public:
        Rupees(int x) { Rval = x; }
        operator Paise()
        {
            return Paise(Rval*100);
        }
};

void printPaise(Paise p)
{
    cout << p;
}

int main()
{
    Rupees R(7);

    printPaise(R);
}
