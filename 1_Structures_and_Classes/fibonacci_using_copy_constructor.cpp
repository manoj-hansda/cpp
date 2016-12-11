#include <iostream>
using namespace std;

class Series
{
        static int term;
        int val;
    public:
        Series(int x) { val = x; }

        Series(Series &c)
        {
            int tmp = term;
            term = term + c.val;
            cout << term << " ";
            c.val = tmp;
        }
};

int Series :: term = 1;

int main()
{
    Series cur(0);

    for(int i = 0; i < 10; i++)
        Series next(cur);
}
