// runtime polymorphism ----->>>> method overriding

#include <iostream>
using namespace std;

// conditions --->>>
// 1.) same method
// 2.) same parameter
// 3.) should follow inheritance


class Animal {
     public :
       void speak() {
         cout<<"speaking !"<<endl;
       }
};

class Dog : public Animal {
     public :
        void speak() {
            cout<<"barking !"<<endl;
        }
};

int main() {
     Dog Alaskan_malamute ;
     Alaskan_malamute.speak();
     return 0;
}