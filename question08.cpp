// write a program to print fibbonaci series 
#include <iostream>
using namespace std;
int main ()
{
    int first = 0 ,second = 1 ;
    int  next_term;
    int n;
    cout<<"enter the number of terms :"<<endl;
    cin>>n;
    cout<<first<<" "<<second<<" ";
    next_term = first + second;
    for( int i = 1 ; i <= n ; i ++){
         cout<<next_term << " ";
         first = second;
         second = next_term;
         next_term = first + second ;
    }
    return 0;
}