//write a program to find counting number from 1 to n(given number)
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the number of terms :"<<endl;
    cin>>n;
    //using loop for counting upto n terms
    for ( int i = 1 ; i <= n ; i++) {
        cout<<i<<" ";
    }
    return 0;
}