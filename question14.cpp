// write a program to convert binary into decimals 

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n ;
    int ans = 0;
    int i = 1;
    cout<<" enter the number :"<<endl;
    cin>>n;
    while ( n != 0){
       int digit = n % 10 ;
            ans = ans + digit * i;
           n = n / 10;
           i*=2;
    }
    cout<<ans<<endl;;

    return 0 ;
}