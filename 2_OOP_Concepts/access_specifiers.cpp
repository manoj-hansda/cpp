/* C++ has 3 access specifiers (i.e., visibility mode):
   1.Private    2.Protected     3.Public.
*/

#include <iostream>

using namespace std;

class BaseClass
{
    private:
        int pvtVar;
    protected:
        int ptdVar;
    public:
        int pbcVar;

        void setPvtValue()
        {
            // This function is inside BaseClass and can access
            // its private, protected & public members.
            pvtVar = 3;
            cout << "Private var = " << pvtVar << endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        void setPtdValue()
        {
            // This function is inside derivedClass and can access
            // its BaseClass' protected & public members.
            ptdVar = 2;
            cout << "Protected var = " << ptdVar <<endl;
        }
};

int main()
{
    BaseClass c;
    DerivedClass d;

    // since main() is outside of BaseClass, it can access
    // only its public members.
    c.pbcVar = 1;
    cout << "Public var = " << c.pbcVar << endl;

    c.setPvtValue();

    d.setPtdValue();

    cin.get();
    return 0;
}
