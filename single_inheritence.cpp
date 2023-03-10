// Types of inheritence ----->>>>
// 1.) single inheritence --->>

#include <iostream>
using namespace std;

class Animal {
    
    public :
        int age;
        int weight;
        string colour;
    
    public :
       void speak () {
         cout<<" Dog is barking. " <<endl;
       }

       int getage (int a) {
            this-> age = a;
            return a;
        }

 };

class Dog : public Animal {

  };

int main () {
     Dog pitbull;
     pitbull.speak();
     pitbull.getage(10);
     cout<<pitbull.getage(10) <<endl;
     return 0;
}
 