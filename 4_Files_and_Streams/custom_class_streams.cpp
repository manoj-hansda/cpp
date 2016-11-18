#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    private:
        int X;
        int Y;
    public:
        double operator - (Point &p);
        friend istream & operator >> (istream&, Point&);
        friend ostream & operator << (ostream&, Point&);
};

double Point :: operator - (Point &p)
{
    return sqrt( (this->Y - p.Y) + (this->X - p.X) );
}

istream & operator >> (istream &is, Point &p)
{
    cout << "X = ";
    is >> p.X;
    cout << "Y = ";
    is >> p.Y;
    return is;
}

ostream & operator << (ostream &os, Point &p)
{
    os << "(" << p.X << " , " << p.Y << ")";
    return os;
}

int main()
{
    Point P1, P2;

    cout << "Enter initial point: " << endl;
    cin >> P1;
    cout << "Enter final point: " << endl;
    cin >> P2;

    double distance = P2 - P1;

    cout << "Distance between points " << P1 << " and " << P2 << " = " << distance << " units" << endl;
}
