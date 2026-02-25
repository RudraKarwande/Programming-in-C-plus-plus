#include <iostream>
using namespace std;
class A{
    public:
    int rollno=27;
    void informationA(){
    cout <<"roll no of student is:"<<rollno<<endl;
}
};
class B{
    public:
    string name="Rudra";
    void informationB(){
    cout <<"name of student is:"<<name<<endl;
}
};
class C{
    public:
    string state="Maharashtra";
    void informationC(){
    cout <<"state of student is:"<<state<<endl;
}
};
class child: public A,public B,public C
{
    public:
    int enrollmentnumber;
    void get(){
         cout <<"Enter an enrollment number:"<<endl;
         cin>>enrollmentnumber;
    }
    void display(){
        cout<<"enrollment number is:"<<enrollmentnumber<<endl;
    }
};
int main(){
    child c1;
    c1.informationA();
    c1.informationB();
    c1.informationC();
    c1.get();
    c1.display();
}
