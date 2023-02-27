// write a program to check whether the given number is power of 2 or not
#include <iostream>
#include <limits.h>
using namespace std;

bool IspowerofTwo(int n){
                    int power = 1;
                    for( int i=0 ; i<31 ; i++){
                      if(power == n){
                        return true;
                      }
                      if( power < INT_MAX/2){
                      power*=2;
                      }
                    }
                    return false;
   }


int main(){
            int n ;
            cout<<" enter the number :"<< endl;
            cin>>n;
            if( IspowerofTwo(n)){
              cout<<n<<" is power of 2"<<endl;
            }
            else{
              cout<<n<<" is not power of 2"<<endl;
            }
          return 0;
}