// polymerphism ---->>>>

// compile time polymorphsim --->>>>

#include <iostream>
using namespace std;

// function overloading 
class Animal {
    public :
      void speak (int age) {
         cout<<"Say hello !"<<age<<endl;
      }

      void speak () {
        cout<<"Hello !"<<endl;
      }
};



class B {
      public :
          int a;
          int b;

      public :
         int add() {
            return a+b;
         }

void operator+ (B &obj) {
    
      // int value1 = this -> a;
      // int value2 = obj.b;
      // cout<<"output :" <<value1 - value2 <<endl;
       cout<<"hello anjali !"<<endl;
}
};




int main () {
      Animal Lion;
      Lion.speak();
    
      B obj1,obj2;;
      obj1.a = 4;
      obj2.b = 1;

      obj1 + obj2;
       
      return 0;
}
