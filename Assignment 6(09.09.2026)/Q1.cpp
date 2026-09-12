#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float marks;

public:
    // Parameterized constructor
    Student(int r, string n, float m)
    {
        roll = r;
        name = n;
        marks = m;
    }

    // Copy constructor
    Student(const Student &s)
    {
        roll = s.roll;
        name = s.name;
        marks = s.marks;
    }

    void display()
    {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    // Creating student using parameterized constructor
    Student s1(101, "Sayan", 85.5);

    // Creating duplicate record using copy constructor
    Student s2(s1);

    cout << "Original Student:" << endl;
    s1.display();

    cout << "\nCopied Student:" << endl;
    s2.display();

    return 0;
}