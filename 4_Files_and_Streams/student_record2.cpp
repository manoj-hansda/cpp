#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
using namespace std;

void addEntries();
void viewRecords();
void editRecord();
void searchRecords();
void sortRecords();

class Student
{
        char Name[30];
        int Roll;
        double Marks;
    public:
        Student() { strcpy(Name, "N/A");    Roll = 0;   Marks = 0.0; }
        void setName()  { cout << "Name : ";  cin.getline(Name, 20); }
        void setRoll()  { cout << "Roll : ";  cin >> Roll; }
        void setRoll(int r)  { Roll = r; }
        void setMarks() { cout << "Marks : ";  cin >> Marks; }
        char* getName() { return Name; }
        int getRoll()   { return Roll; }
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
    cout << "\t\t\t Student Record Book \n"
         << "\t\t\t ------------------- \n\n"
         << "1. Add new entries \t 2. View all records \t 3. Search a record\n"
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
        case 3:
            searchRecords();
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
    cout << "\nTotal " << sn-1 << " records.";
    cout << "\n--------------------------------------------------------------------\n";

    fi.close();

    cout << "E : Edit a record   |    F : Search a record   |   S : Sort records";
    cout << "\n--------------------------------------------------------------------\n";
    cout << "Enter appropriate key : ";
    char choice;
    cin >> choice;

    switch(choice)
    {
        case 'e':
        case 'E':
            editRecord();
            break;
        case 'f':
        case 'F':
            searchRecords();
            break;
        case 's':
        case 'S':
            sortRecords();
            break;
        default:
            cout << "\nInvalid choice!\n";
            break;
    }
}

void editRecord()
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

void searchRecords()
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
    }1

    cout << "\nEnter name of student : ";
    char name[30];
    cin.ignore();
    cin.getline(name, 30);

    bool found = true;
    while( fi.read((char *) & S, sizeof(S)) )
    {
        if( strcmp(S.getName(), name) == 0 )
        {
            cout << "\n-> ";
            S.printDetails();
            found = true;
            break;
        }

        else
            found = false;
    }

    if(!found)
        cout << "\nRecord not found!\n";

    fi.close();
}

void sortRecords()
{
    ifstream fi("studentsData.dat", ios::binary);

    fi.seekg(0, ios::end);
    int counts = fi.tellg()/sizeof(S);

    Student S[counts];

    fi.seekg(0, ios::beg);
    int i = 0;

    while( fi.read((char *) & S[i++], sizeof(S[i])) );

    Student temp;
    for(int j=0; j<counts; j++)
    {
        for(i=0; i<counts-1; i++)
        {
            if(S[i].getRoll() >= S[i+1].getRoll())
            {
                temp = S[i];
                S[i] = S[i+1];
                S[i+1] = temp;
            }
        }
    }

    cout << "\nSorted record (by roll no.) :\n"
         << "-------------------------------\n";
    for(i=0; i<counts; i++)
        S[i].printDetails();


    fi.close();
}
