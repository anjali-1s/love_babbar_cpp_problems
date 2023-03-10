// Hybrid inheritance ---->>>

#include <iostream>
using namespace std;

class C {
     public :
        void function_C() {
            cout<<"running !"<<endl;
        }
};

class A : public C {
   public :
     void function_A() {
        cout<<"walking"<<endl;
     }
};

class D : public C {
     public :
      void function_D () {
        cout<<"sitting"<<endl;
      }
};



int main () {
     D object1;
     object1.function_C();
     

     A object2;
     object2.function_C();

     
     return 0;
}