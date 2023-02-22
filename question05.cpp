//write a program to print the sum of numbers upto n terms
#include <iostream>
using namespace std;
int main () 
{
    int n , sum = 0;
    cout<<" enter the number of terms :"<<endl;
    cin>>n;
    for ( int i = 1 ; i <=n ; i++){
        sum = sum + i ;
    }
    cout<<"the sum of numbers are :"<<sum<<endl;
    return 0;
}