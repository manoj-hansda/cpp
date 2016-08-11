#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    try
    {
        //throw runtime_error("error occured");
        //throw "something went wrong";
        throw 20;
    }
    catch(runtime_error err)
    {
        cout << "runtime exeption handler.";
    }
    catch(...)
    {
        cerr << "default exception handler.";
    }

    cin.get();
    return 0;
}
