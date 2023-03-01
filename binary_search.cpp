// write a program to implement binary search on an array
#include <iostream>
using namespace std;

// implementing binary search
int binarysearch(int arr[], int n, int key){
              int s = 0;
              int e = n-1;
              int mid = s+(e-s)/2;
              while(s<=e){
                if(arr[mid] == key){
                    return mid;
                }
                if(arr[mid] < key){
                    s = mid+1;
                }
                else{
                    e = mid-1;
                }
               mid = s+(e-s)/2;
              }
              return -1;// if element not found
}


int main(){
    int arr[5]={ 2,4,6,8,9};
    int n= 5;
    int key;
    cout<<" enter the element to search :"<<endl;
    cin>>key;
    int arrayIndex = binarysearch(arr,5,key);
    cout<<" the index of the key is :"<<arrayIndex<<endl;
}


vector<vector<int>> ans;
