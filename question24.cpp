// write a program to find the minimum and maximum element in an array
#include<iostream>
#include<limits.h>
using namespace std;
int getmin(int arr[], int size){
         int mini = INT_MAX;
         for(int i=0 ; i<size ; i++){
            if( mini > arr[i]){
                mini = arr[i];
            }
         }
         return mini;
}

int getmax( int arr[], int size){
    int maxi = INT_MIN;
    for(int i = 0; i <size; i++){
        if(maxi < arr[i]){
            maxi = arr[i];
        }
    }
    return maxi;
}

int main(){
          int arr[15] = {2,5,3,8,6,4,0,17,92,25,15,18,19,90,34};
          int size = 15;
          //cout<<" enter the size of an array :"<<endl;
          //cin>>size;
          for(int i=0 ; i<size ; i++){
            cout<<arr[i]<<" ";
          }
          cout<<endl;
          cout<<" The minimum element in the given array is :"<<getmin(arr,size)<<endl;
          cout<<" The maximum element in the given arary is :"<<getmax(arr,size)<<endl;
         return 0;
}