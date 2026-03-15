// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class series{
private:
    int n, i, next;
    int firstterm, secondterm;

public:
    series(int a, int b){
        firstterm = a;
        secondterm = b;
    }

    void display(){
        cout << "First term is: " << firstterm << endl;
        cout << "Second term is: " << secondterm << endl;
    }

    void show(){
        cout << "Enter the number of terms: ";
        cin >> n;

        int a = firstterm;
        int b = secondterm;

        cout << "Fibonacci series is: ";

        cout << a << " " << b << " ";

        for(int i = 2; i < n; i++){
            next = a + b;
            cout << next << " ";
            a = b;
            b = next;
        }
    }
};

int main(){
    series s1(0,1);

    s1.display();
    s1.show();

    return 0;
}
