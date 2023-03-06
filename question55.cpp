// insertion sort
#include<iostream>
using namespace std;

// printing function
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return ;
}

// insertion sort ----->>>
void insertionsort(int arr[], int n){
        for(int i=1; i<n; i++){
            int temp=arr[i];
            for(int j=i-1; j>=0; j--){
                if(arr[i]<arr[j]){
                    arr[j]=arr[j+1];                
            }
            else{
                break;
            }
            arr[j+1]=temp;
        }
}
}


int main(){
    int arr[]={12,34,21,9,10};
    int n=5;
   // print(arr,n);
    //out<<endl;
    insertionsort(arr,n);
    print(arr,n);
    return 0;
}