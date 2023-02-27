//write a program to count the number of 1 bits (setbits) in a given number
#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<" enter the integer :"<<endl;
    cin>>num;
    int count = 0;
    while (num > 0){
        if( num == 0){
            return 0;
        }
        else {
             count = count + ( num & 1);
             num = num >> 1;
        }
    }
     cout<<count<<endl;
    
    return 0;
}