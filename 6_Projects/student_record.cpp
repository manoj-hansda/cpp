#include<iostream>

using namespace std;

class student {
    private:
        string name;
        float marks[5];
    public:
        void setName(string n);
        void setMarks(float m[]);
        string getName();
        float *getMarks() { return marks;};
};

void student :: setName(string n) {
    name = n;
}

void student :: setMarks(float m[]) {
    for(int i=0; i<5; i++)
        marks[i] =  m[i];
}

string student :: getName() { return name; }

//float student :: *getMarks() { return marks; }

int main() {
    student s;
    string name;
    float marks[5];

    cout << "Enter name: ";
    cin >> name;

    s.setName(name);

    cout << "Enter marks of 5 subjects:\n";
    for(int i=0; i<5; i++)
        cin >> marks[i];

    s.setMarks(marks);

    float *smarks = s.getMarks();

    cout << "Student Name :" << s.getName() <<endl;
    cout << "Marks Obtained : " << endl;
    for(int i=0; i<5; i++)
        cout << smarks[i] <<" ";


    return 0;
}
