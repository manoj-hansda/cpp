#include <iostream>

struct student
{
    int roll;
    char name[30];
    double marks;
};

int main()
{
    student s {15, "Rahul", 95.3};
    return 0;
}
