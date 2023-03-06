// write a program to reverse an array
#include <iostream>
using namespace std;
void reverseArray(int arr[], int n){
    int s=0;
    int e=n-1;
    
    while(s<=e){
     swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void printArray(int arr[], int n){
     for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
     }
    cout<<endl;
}
int main(){
        int arr[7]={ 3,4,8,6,5,1,9};
        int n = 7;
        cout<<" The array  before reverse :";
           printArray(arr,7);
           reverseArray(arr,7);
           cout<<" The array after reverse :";
           printArray(arr,7);
        return 0;
}