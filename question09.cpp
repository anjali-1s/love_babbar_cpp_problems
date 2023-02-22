// write a program to check the entered number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int num ;
    bool  is_prime = 1;
    cout<<" enter the number :"<<endl;
    cin>>num;
    for( int i = 2 ; i < num  ; i++){
     if ( num % i == 0){
        is_prime = 0;
        
     }  
     if ( is_prime == 0){
        cout<<" not  prime number "<<endl;
     }
     else {
        cout<<" prime number "<<endl;
     }                                     
    return 0;
}
}