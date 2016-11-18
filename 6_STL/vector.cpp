#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> list1;

    int n, elem;
    cout << "Enter no. of elements: ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cout << "Enter element: ";
        cin >> elem;
        list1.push_back(elem);
    }

    cout << "\nList1 contains:\n";
    for(int i=0; i<list1.size(); i++)
    {
        cout << list1[i] << " ";
    }
}
