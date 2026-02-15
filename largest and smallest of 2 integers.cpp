#include<iostream>
using namespace std;
int main () 
{
    int a;
    int b;
    
    cout <<"enter an first integer:";
    cin >> a;
    cout <<"enter an second integer:";
    cin >>b;
    
    if(a > b) 
    {
        cout <<"largest number is:"<< a<<endl;
        cout <<"smallest number is:"<<b <<endl;
    }
    
    else if(a < b) 
    {
        cout <<"largest number is:"<< b<<endl;
        cout <<"smallest number is:"<<a <<endl;
    }
    
    else 
    {
         cout <<"both numbers are equal:";
    }

    return 0;
}
