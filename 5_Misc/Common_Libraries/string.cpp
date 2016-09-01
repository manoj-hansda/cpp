/*  Common functions of <string.h> header file :
    1. getline():
                 <istream object> getline (char* str, streamsize n, char delim );

    2. getline(string):
                getline (<istream object>, string& str, char delim <optional>);
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char line[30];
    cin.getline(line, 30);              // getting char[] string
    cout <<"string: " << line << endl;

    string name;
    getline(cin, name);                 // getting c++ string
    cout <<"char[]: " << name << endl;

    return 0;
}
