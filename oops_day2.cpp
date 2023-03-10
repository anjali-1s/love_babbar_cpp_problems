// pillars of oops concept

#include <iostream>
using namespace std;

// 1.)  Encapsulation ----->>>>
//----->>  wrapping up data members and functions within a single entity

class student {
  private : 
       int age;
       int height;
       int weight;


 public :
       int getage (int a) {
        this -> age = a;
          return a;
       }

};


int main () {
    student Anjali;
    Anjali.getage(20);
    cout<<"The age of Anjali is :" << Anjali.getage(20);
    return 0;
}