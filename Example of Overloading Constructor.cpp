// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Rectangle {
    private:
    int length;
    int breadth;
    
    
public:
Rectangle () {
    length = 20;
    breadth =10;
    }
    Rectangle (int i) {
        length = breadth= i;
    }
    Rectangle (int i , int j){
        length = i;
        breadth = j;
    }
    void display (){
        cout <<"length of rectangle is:"<<length<<endl;
        cout <<"breadth of rectangle is:"<<breadth<<endl;
        
    }
};
int main (){
    Rectangle r1;
    Rectangle r2 (10);
    Rectangle r3 (10 , 20);
    
    
    r1.display();
    r2.display();
    r3.display();
}
