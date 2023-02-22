//write a program to check the entered number is +ve , -ve or 0
#include <iostream>
using namespace std;
int main ()
{
    int num;
    cout<<"enter the number :"<<endl;
    cin>>num;
    if ( num > 0 ) {
        cout<<"positive number "<<endl;
    }
    else if ( num == 0 ) {
        cout<<"zeroes"<<endl;
    }
    else {
        cout<<"negative number"<<endl;
    }
    return 0;
}