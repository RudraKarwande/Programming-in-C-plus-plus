// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Car {
    private:
    string model;
    string name;
    int year;
    
    public:
    void acceptdetails()
{
        cout <<"enter model name:";
        cin >> model;
        cout <<"enter company name:";
        cin >> name;
        cout <<"enter year of car:";
        cin >> year;
    }
    void displaydetails()
{
        cout <<"model of car is"<<model<<endl;
        cout <<"company name is"<< name<<endl;
        cout << "year of car is" <<year<<endl;
    }
};
int main ()
{
    Car mycar;
    mycar.acceptdetails();
    mycar.displaydetails();
}
