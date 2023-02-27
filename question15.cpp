// write a program to reverse an integer 
#include <iostream> 
using namespace std;
int main(){
          int n;
          cout<<" enter the number :"<<endl;
          cin>>n;
          int ans = 0;
          while ( n != 0){
            int rem = n % 10;
            ans = ( ans * 10 ) + rem ;
            n = n / 10;
          }
          cout<<ans<<endl;
          return 0;
}