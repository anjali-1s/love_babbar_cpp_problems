// write a program to distribute an amount in notes of different values using switch case
#include<iostream>
using namespace std;
int main(){
    int amount=1330;
    int N100, N50, N20, N1=0;
    switch(amount >= 100){
        case 1:
        N100=amount/100;
        amount=amount%100;
        case 2:
        N50=amount/50;
        amount=amount%50;

         case 3:
        N20=amount / 20;
        amount =amount %20;
    }
    N1=amount+N1;
    cout<<" The notes of 100 for the given amount is :"<<N100<<endl;
    cout<<" The notes of 50 for the given amount is :"<<N50<<endl;
    cout<<" The notes of 20 for the given amount is :"<<N20<<endl;
    cout<<" The notes of 1 for the given amount is :"<<N1<<endl;
      return 0;
}