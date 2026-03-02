#include <iostream>
using namespace std;

class person {
public:
    string name;
    int age;
    int rollno;

    void personaldetails() {
        cout << "Enter name of student: ";
        cin >> name;

        cout << "Enter age of student: ";
        cin >> age;

        cout << "Enter roll number of student: ";
        cin >> rollno;
    }
};

class result : public person {
public:
    string subjects[3] = {"History", "SST", "Science"};
    int marks[3];
    int total = 0;

    void academicmarks() {
        cout << "\nEnter marks:\n";

        for (int i = 0; i < 3; i++) {
            cout << "Enter marks of " << subjects[i] << ": ";
            cin >> marks[i];
        }
    }

    void showresult() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;

        cout << "\n--- Marks ---" << endl;

        for (int i = 0; i < 3; i++) {
            cout << subjects[i] << ": " << marks[i] << endl;
            total += marks[i];
        }

        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    result r1;

    r1.personaldetails();
    r1.academicmarks();
    r1.showresult();

    return 0;
}
