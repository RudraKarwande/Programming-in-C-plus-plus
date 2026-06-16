// Class and Object
#include <iostream>
using namespace std;

class book
{
private:
    string title;
    string name;
    int year;

public:
    void accept()
    {
        cout << "Enter title: ";
        cin >> title;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter year: ";
        cin >> year;
    }

    void display()
    {
        cout << "Title is: " << title << endl;
        cout << "Name is: " << name << endl;
        cout << "Year is: " << year << endl;
    }
};

int main()
{
    book b;

    b.accept();
    b.display();

    return 0;
}
