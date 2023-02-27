// write a program to print the negative decimal number to binary
#include <iostream>
using namespace std;

// power function
 int pow( int n, int p){
    if(p == 0)
    return 1;
    else 
    return (n*pow(n,p-1));
 }

int main(){
             int n ;
             cout<<" enter a negative decimal :"<<endl;
             cin>>n;
             // converting the negative decimal in positive decimal
             n = n * (-1);
             int ans = 0;
             int i = 0;
             n = (~n); // taking the 1's compliment of the decimal number 
             n = n+1;  // adding 1 to the number to get 2's compliment
             while( n!=0){
                    int bit = n & 1;
                    ans = ans + (bit * pow(10,i));
                    i++;
                    n = n>>1;
             }
             cout<<"The returned number is :"<<ans;
             return 0;
}