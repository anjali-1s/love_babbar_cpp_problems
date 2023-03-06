// write a program to find the nth term of fibbonaci series.
#include<iostream>
using namespace std;

// fibbonaci series---->>>
void fibbo(int n){
    int first=0;
    int second=1;
    cout<<first<<" ";
    cout<<second<<" ";
    int temp=first+second;
    cout<<temp<<" ";
    for(int i=1; i<=n; i++){
        first=second;
        second=temp;
        temp=first+second;
         cout<<temp<<" ";
    }
    return ;
   }

   
int main(){
    int n;
    cout<<" enter the number of terms :"<<endl;
    cin>>n;
    fibbo(n);
    return 0;
}

   