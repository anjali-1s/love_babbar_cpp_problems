// write a progarm to print the sum of all the elements of an array
#include <iostream>
using namespace std;

// function to print sum of the array
int printsum( int arr[], int n){
    int sum = 0;
    for( int i=0 ; i<n ; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int arr[6]={ 2,4,7,8,9,8 };
    int n = 6;
    cout<<" The array is :";
    for( int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<" The sum of the elements of the given array is :"<<printsum(arr,n)<<endl;
         return 0;
}