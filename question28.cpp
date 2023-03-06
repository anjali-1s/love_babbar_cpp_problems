// write a program to print the scope of an array
#include <iostream>
using namespace std;

// update function 
void update(int arr[], int n){
      cout<<" when we change the value inside the update function we get :";
      arr[0]=120;

      // printing the array after changing the value
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl<<endl;;
      cout<<" inside the main function ------"<<endl<<endl;
}


int main(){
        int arr[5]={ 3,5,4,8,9};
        int n = 5;
        cout<<endl;
         cout<<"printing the array inside main function before updation:";
         for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
         }
         cout<<endl<<endl;
         //calling update function
         update(arr,5);
         cout<<endl;
         cout<<" printing the array inside main function after updation :";
         for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
         }
         cout<<endl;
        return 0;
}