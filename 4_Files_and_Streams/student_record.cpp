#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
using namespace std;

void addEntries();
void viewRecords();
void editRecords();

class Student
{
        char Name[30];
        int Roll;
        double Marks;
    public:
        Student() { strcpy(Name, "N/A");    Roll = 0;   Marks = 0.0; }
        void setName()  { cout << "Name : ";  cin.getline(Name, 20); }
        void setRoll()  { cout << "Roll : ";  cin >> Roll; }
        void setMarks() { cout << "Marks : ";  cin >> Marks; }
        void setDetails()
        {
            setName();  setRoll();  setMarks();
        }
        void printDetails()
        {
            cout << "Name: " << setw(20) << setiosflags(ios::left) << Name
                 << " Roll : " << setw(5) << Roll
                 << "\tMarks : " << setw(6) << resetiosflags(ios::left)
                 << setiosflags(ios::fixed) << setprecision(2) << Marks << endl;
        }
};
Student S;
int main()
{
    cout << "\t Student Record Book \n"
         << "\t ------------------- \n"
         << "1. Add new entries \t 2. View all records \n"
         << "\nEnter a choice : ";
    int choice;
    cin >> choice;

    switch(choice)
    {
        case 1:
            addEntries();
            break;
        case 2:
            viewRecords();
            break;
        default:
            cout << "Invalid choice!\n";
            break;
    }
}

void addEntries()
{

    cout << "\nEnter no. of students: ";
    int num;
    cin >> num;

    ofstream fo("studentsData.dat", ios::app | ios::binary);

    for(int i=0; i<num; i++)
    {
        cin.ignore();
        cout << "\nEnter details of student " << i+1 << " :" << endl;
        S.setDetails();

        fo.write((char *) & S, sizeof(S));
    }

    fo.close();

    cout << "\n*** " << num << " record(s) added successfully! *** \n";

    cout << "\nPress 'v' to view all records: ";
    char choice;
    cin >> choice;

    if(choice == 'v' || choice == 'V')
        viewRecords();
}

void viewRecords()
{
    ifstream fi("studentsData.dat", ios::binary);

    if(!fi.is_open())
    {
        cout << "\n*** No database found! ***" << endl << endl
             << "Add new entries to create database (press 'a') : ";
        char choice;
        cin >> choice;

        if(choice == 'a' || choice == 'A')
            addEntries();
        exit(1);
    }

    if(!fi.read((char *) & S, sizeof(S)))
    {
        cout << "\nNo record found!";
        cout << "\nPress 'a' to add new entries: ";
        char choice;
        cin >> choice;

        if(choice == 'a' || choice == 'A')
            addEntries();
    }

    fi.seekg(0);

    int sn = 1;
    cout << "\n--------------------------------------------------------------------\n";
    while( fi.read((char *) & S, sizeof(S)) )
    {
        cout << setw(2) << sn++ <<". ";
        S.printDetails();
    }
    cout << "\nTotal " << sn-1 << " records";
    cout << "\n--------------------------------------------------------------------\n";

    fi.close();

    cout << "Press 'e' to edit a record ";
    char choice;
    cin >> choice;

    if(choice == 'e' || choice == 'e')
        editRecords();
}

void editRecords()
{
    fstream f("studentsData.dat", ios::ate | ios::in | ios::out | ios::binary);

    cout << "\nEnter serial no. of the record to be edited: ";
    int sn;
    cin >> sn;

    int location = (sn-1) *  sizeof(S);

    f.seekp(location);
    f.read((char *) & S, sizeof(S));

    cout << "\nChoose the field:   1.Name   2.Roll   3.Marks : ";
    int field;
    cin >> field;
    cin.ignore();

    cout << "\nEnter new value for ";
    switch(field)
    {
        case 1:
            S.setName();
            break;
        case 2:
            S.setRoll();
            break;
        case 3:
            S.setMarks();
            break;
        default:
            cout << "Invalid choice!\n";
            break;
    }

    f.seekp(location);
    f.write((char *) & S, sizeof(S));

    f.close();

    cout << "\n*** Record updated succesfully! *** \n";
    cout << "\nPress 'v' to view all records: ";
    char choice;
    cin >> choice;

    if(choice == 'v' || choice == 'V')
        viewRecords();
}
