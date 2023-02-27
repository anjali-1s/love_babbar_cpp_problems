// write a program to find the compliment of  base 10 
#include <iostream>
using namespace std;
int bitwisecomplement(int n){
  int m = n;
  int mask = 0;
  //edge case 
   if(m==0){
    return 1;
  }
  while ( m != 0){
    mask = (mask << 1) | 1;
    m = m >> 1;
  }
  int ans = (~m) & mask;
  return ans;
}


int main(){
          int n ;
          cout<<" enter the number :"<<endl;
          cin>>n;
          int complement = bitwisecomplement(n);
           cout<<" the complement is :"<<complement;
           return 0;
}