# include <iostream>
using namespace std;
int main () {
    int n ,sum=0 ;
    cout <<"enter n integers:";
    cin >> n;
      
      for (int i=0 ; i<n ; i++)
      sum=sum+i;
      
      cout <<"sum of n integers is:"<<sum<<endl;
      return 0;
}
      
