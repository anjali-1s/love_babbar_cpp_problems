// write a program to check the given year is leap year or not 
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter the year :"<<endl;
    cin>>year;
    if( (year % 400 == 0 && year % 100 != 0 ) || year % 4 == 0){
        cout<<"the year is a leap year"<<endl;
    }
    else {
        cout<<"the year is not a leap year "<<endl;
    }
    return 0;
}