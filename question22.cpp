// write a program to calculate the nth term of an AP(3*n+7)
#include<iostream>
using namespace std;

int AP(int a, int d, int N){
    return (a+(N-1)*d);
}

int main(){
    int a,N,d;
     cout<<"enter the value of a:"<<endl;
     cin>>a;
     cout<<" enter the value of N:"<<endl;
     cin>>N;
     cout<<" enter the value of d:"<<endl;
     cin>>d;
     cout<<" The progression is:"<<AP(a,d,N);
     return 0;
}