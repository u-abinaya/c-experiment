#include <iostream>
#include <string>
using namespace std;

class student {
private:
    int rollno;
    string name;

public:
    student(int r, string n) {
        rollno = r;
        name = n;
        cout << "student object created" << endl;
    }

    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }

    ~student() {
        cout << "student object destroyed" << endl;
    }
};

int main() {
    student s1(101, "abi");
    s1.display();
    return 0;
}
