#include <iostream>
#include <sstream>
using namespace std;

int sexy(const char* a, const char* b) {
	stringstream tmp;
	tmp << a;
	int tmp1;
	tmp >> tmp1;
	tmp.clear();
	tmp << b;
	int tmp2;
	tmp >> tmp2;
	return tmp1+tmp2;
}

int main() {
	char* string_one = "2123";
	char* string_two = "234";
	cout << sexy(string_one, string_two);
	return 0;
}
