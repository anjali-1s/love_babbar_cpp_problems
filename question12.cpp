// write a program to convert decimals number to binary
#include <iostream>
#include <math.h>
using namespace std;
int main () {
          int num;
          cout<<" enter the number :"<<endl;
          cin>>num;
          int ans = 0 ;
          int i = 1;
          int bits ;
          while ( num != 0){
            bits = num & 1 ;
            ans = ans + ( bits * i);
            num = num >> 1;
            i = i * 10;
          }
          cout<<ans;
    return 0;
}