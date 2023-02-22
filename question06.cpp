// write a program to print sum of all even numbers from 2 to n
#include <iostream>
using namespace std;
int main ()
{
    int n;
    int sum = 0;
    cout<<"enter the number of terms :"<<endl;
    cin>>n;
    for(int i = 2 ;i <= n ; i=i+2 ){
        if ( i % 2 == 0){
            sum = sum + i;
        }
    }
     cout<<" the sum is : "<<sum;
    return 0;
}