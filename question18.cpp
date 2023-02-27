// write a program to perform all bitwise operation 
#include <iostream>
using namespace std;
int main(){
          int a = 3;
          int b = 4;
          int ans;
          // Bitwise AND 
          ans = a & b;
          cout<<ans<<endl;

          // Bitwise OR
          ans = a | b;
          cout<<ans<<endl;

          // Bitwise NOT
          ans = !a;
          cout<<ans<<endl;
          ans= !b;
          cout<<ans<<endl;

          // Bitwise XOR
          ans = a^b;
          cout<<ans<<endl;

          // right shift
          ans = a>>1;
          cout<<ans<<endl;
          ans = b>>1;
          cout<<ans<<endl;

          // left shift
          ans = a<<1;
          cout<<ans<<endl;
          ans = b<<1;
          cout<<ans<<endl;


          return 0;
}