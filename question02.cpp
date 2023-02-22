//write a program to find the greater number among two numbers
#include <iostream>
using namespace std;
int main ()
{
    int a , b ;
    cout<<"enter two numbers :"<<endl;
    cin>>a>>b;
    if ( a > b ) {
        cout<<"a is greatest number "<<endl;
    }
    else {
        cout<<"b is greatest number "<<endl;
    }
    return 0;
}