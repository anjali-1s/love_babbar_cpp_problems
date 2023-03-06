// implementing bubble sort
#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
}
    return;
}

// bubblesort ----->
void bubblesort(int arr[], int n){
    for(int i=0; i<n-1; i++)
      // for round 1 to n-1
      
      for(int j=0; j<n-i-1 ;j++)
        if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
            //print(arr,n);
           // cout<<endl;
    return;
    
}


int main(){
    int arr[]={45,28,98,12,20};
    int n=5;
    print(arr,n);
    cout<<endl;
    bubblesort(arr,n);
    print(arr,n);
    return 0;
}
