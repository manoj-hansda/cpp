#include<iostream>

using namespace std;

class item
{
private:
    int id;
    float cost;
public:

    void setdata( int x, float y)
    {
        id = x;
        cost = y;
    }
    void getdata();
};

void item::getdata()
    {
        cout << "ID: " << id <<endl
             <<"Cost: " << cost;
    }

main()
{
    item i, j;
    i.setdata(2, 15.78);
    i.getdata();

}
