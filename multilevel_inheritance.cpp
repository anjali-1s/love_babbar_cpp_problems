// multilevel inheritance ----->>>

#include <iostream>
using namespace std;

class Animal {
    public :
       int age;
       int weight;
       string colour;
};

class Dog {
    public:
      void speak () {
        cout<<"speaking" <<endl;
      }
};



class Alaskan_malamute : public Animal{
    public:
     void speak() {
        cout<<" speaking " <<endl;
     }
};

int main () {
      Alaskan_malamute A;
      A.speak();
      cout<<A.age<<endl;
      return 0;
}