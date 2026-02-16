#include<iostream>
using namespace std;
class XYZ {
    public:
    string name;
    XYZ (string n){
        name =n;
    }
    XYZ (const XYZ &obj){
        name=obj.name;
        
    }
};
int main (){
    XYZ x1 ("rudra");
    XYZ x2=x1;
     cout << "x1 name: " << x1.name << endl;
    cout << "x2 name: " << x2.name << endl;

    return 0;
}
