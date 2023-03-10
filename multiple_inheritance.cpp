// multiple inheritance ----->>>

#include <iostream>
using namespace std;

class Animal {
    public :
      int height;
      int age;
      int weight;

      int getage( int a ) {
        this->age = a;
        return a;
      }

      int getweight ( int w ) {
        this->weight = w;
        return w;
      }
};

class Human {
    public :
      string colour;

    public :
       void speak () {
        cout<<"speaking"<<endl;
       }
};

// multiple inheritance --->>>

class Hybrid : public Animal , public Human {
     
};


int main () {
     Hybrid object1;
     object1.getage(10);
     cout<<"The age of the animal is :"<<object1.getage(10)<<endl;
     return 0;
}