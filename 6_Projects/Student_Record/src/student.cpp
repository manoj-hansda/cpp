#include "student.h"

void student :: addRecord() {
    cout << "\nEnter student ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter marks:\n";
    for (int i=0; i<5; i++) {
        cout << " " <<subject[i] << ": ";
        cin >> marks[i];
    }
}

void student :: viewRecords() {
    cout << "\nID: " << id << "\t" << "Name: " << name << endl;
    cout << "Marks:\n";
    for (int i=0; i<5; i++) {
        cout << subject[i] << ": " << marks[i] <<", ";
    }
    cout << endl;
}
