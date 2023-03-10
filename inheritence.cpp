// 2.) Inheritence ------->>>>>
// --->> inherit the property of previous class also called parent class or super class and the class which inherit the property ia called child class or sub class.

#include <iostream>
using namespace std;

class Human {

 protected :
      int height;
      int weight;
      int age;


 protected :
      int setweight( int w ) {
         this-> weight = w;
         return w;
      }

      int setage ( int a ) {
        this->age = age;
        return age;
      }

      int setheight ( int h ) {
        this->height = h;
        return h;
      }
     
    /* int getage(int a) {
        this-> age = a;      
        return a;
     }*/

     int getheight() {
        return height;
     }

     int getweight() {
        return weight;
     }

};

class Male : protected Human {
     public :
        string colour;

    void attack () {
         cout<<" male sleeping! " <<endl;
    }
    // protected mode
    int getage(int a) {
        this-> age = a;      
        return a;
    }

    int setage ( int a ) {
        this->age = age;
        return age;
      }

};

int main () {
     Male Aditya;
     //cout<<"The height of Aditya is : "<<Aditya.getheight()<<endl;
     cout<<"The age of Aditya is : " <<Aditya.getage(8)<<endl;
}