// inheritance ambiguity ---->>>

#include <iostream>
using namespace std;

class Animal {
     public :
        void speak () {
            cout<<"speaking !"<<endl;
        }
};

class Lion {
    public :
        void speak () {
            cout<<"Roar !"<<endl;
        }
};

class Elephant : public Animal , public Lion {
    public :
      void speak () {
        
      }
};

int main () {
       Elephant L;
       L.speak();
       return 0;
}