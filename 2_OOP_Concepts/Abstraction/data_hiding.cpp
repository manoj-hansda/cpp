#include<iostream>
#include<conio.h>

#include<stdlib.h>

using namespace std;

class customers
{
private:
    int id;
    float money;
public:
    void setData(int x, float y)
    {
        id = x;
        money = y;
    }
    float getDetails(int x)
    {
        if(x==id)
            return money;
        else
            return -1;
    }
};

main()
{
    int cust_id;
    float cust_money;

    customers c1;

    cout << "Set your ID: ";
    cin >> cust_id;
    cout << "Deposit money: ";
    cin >> cust_money;

    c1.setData(cust_id, cust_money);

    system("CLS");

    cout << "Enter your ID: ";
    cin >> cust_id;

    cust_money = c1.getDetails(cust_id);

    if(cust_money != -1)
        cout << "Available Money: " << cust_money;

    else
        cout << "Not authorized";

    getch();
}

