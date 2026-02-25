#include<iostream>
using namespace std;

class student{
private:
string name;
int rollno;

public:
void acceptdetails(){
cout <<"enter the name of student:";
cin >> name;
cout <<"enter roll no of student:";
cin >>rollno;
}

               void displaydetails(){
  cout <<"name of student is:"<<name<<endl;
cout <<"roll no of student is:"<<rollno<<endl;
}
};
 int main (){
student s1;
s1.acceptdetails ();
s1.displaydetails ();
return 0;
}




