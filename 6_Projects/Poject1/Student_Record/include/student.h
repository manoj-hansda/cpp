#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class student {
    private:
        int id;
        string name;
        double marks[5];
        string subject[5]={"English", "Hindi", "Maths", "Science", "Computer"};
    public:
        void addRecord();
        void viewRecords();
};

#endif
