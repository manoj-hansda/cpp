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
        int pubVar;

        void setValues()
        {
            // This function is inside BaseClass and can access
            // its private, protected & public members.
            pvtVar = 1;
            ptdVar = 2;
            pubVar = 3;
            cout << "Private var = " << pvtVar << endl;
            cout << "Protected var = " << ptdVar << endl;
            cout << "Public var = " << pubVar << endl;
        }
};

class DerivedClass : public BaseClass
{
    public:
        void setValues()
        {
            // This function is inside derivedClass and can access
            // its BaseClass' protected & public members.
            ptdVar = 11;
            pubVar = 12;
            cout << "Protected var = " << ptdVar <<endl;
            cout << "Public var = " << pubVar <<endl;
        }
};

int main()
{
    BaseClass b;
    DerivedClass d;

    // since main() is outside of BaseClass, it can access
    // only its public members.
    b.pubVar = 21;
    cout << "Public var = " << b.pubVar << endl;

    b.setValues();

    d.setValues();

    cin.get();
    return 0;
}
