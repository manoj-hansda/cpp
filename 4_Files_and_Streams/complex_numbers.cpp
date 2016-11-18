#include <iostream>
#include <fstream>

using namespace std;
void readFromFile();
class Cmplx
{
    private:
        double Real;
        double Img;
    public:
        void setData(double, double);
        void getData();
        friend void writeToFile(Cmplx &z);
        friend void readFromFile();
};

void Cmplx :: setData(double r, double i)
{
    Real = r;
    Img = i;
    writeToFile(*this);
}

void Cmplx :: getData()
{

}

int main()
{
    /*int n;
    double real, img;

    cout << "Enter the number of complex nos to add: ";
    cin >> n;

    Cmplx Z[n];

    for (int i = 0 ; i < n ; i++)
    {
        cout << "\nEnter complex no " << i+1 << ":" << endl;
        cout << "Enter Real part: ";
        cin >> real;
        cout << "Enter Imaginary part: ";
        cin >> img;

        Z[i].setData(real, img);

        cout << real << "+" << img << "i added successfully\n";
    }*/

    readFromFile();
}

void writeToFile(Cmplx &z)
{
    ofstream fo;
    fo.open("data.txt", ios::app);
    fo << z.Real << " + " << z.Img <<"i" << endl;
    fo.close();
}

void readFromFile()
{
    double real, img;
    char sign;
    ifstream fo;
    fo.open("data.txt");

    while(fo >> real >> sign >> img )
    {
        fo.ignore();
        cout << real << " and " << img << endl;
    }

    fo.close();
}
