// write a program to subtract the product and sum of digits of an integer
#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<" enter the integer :"<<endl;
    cin>>a;
    int sum = 0 ;
    int  product = 1;
    while(a > 0){
    sum = sum + (a % 10);
     product = product * ( a % 10);
     a = a / 10;
}
   a--;
cout<<" the sum of digits of entered integer is :"<<sum<<endl<<endl;
cout<<" the product of the digits of the entered integer is :"<<product<<endl<<endl;
cout<<" the difference of the sum and the product of the digits of the entered integer is :"<< product - sum <<endl<<endl;
     return 0;
}