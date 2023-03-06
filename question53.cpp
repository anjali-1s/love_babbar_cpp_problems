// implement selection sort
#include <iostream>
using namespace std;

void print(int arr[],int n){
for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
}
    return;
}


// selection sort
void selectionsort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minindex=i;
         for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }

         }
             if(minindex!=i){
            swap(arr[minindex], arr[i]);
             
         }
         // print(arr,n);
         // cout<<endl;
         }
        print(arr,n);
    }


    

//

// main function
int main() { 
     int arr[5]={43,26,78,12,20};
     int n=5;
     selectionsort(arr,n);
     return 0;
     
}
