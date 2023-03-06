// write a program to check whether a given number is even or odd using functions
#include<iostream>
using namespace std;

int even_odd(int num){
    if(num % 2 == 0){
        cout<<" even number!"<<endl;
    }
    else{
        cout<<" odd number!"<<endl;
    }
    return 0;
}

int main(){
      int num;
      cout<<" enter the number:"<<endl;
      cin>>num;
      even_odd(num);
      return 0;
  }