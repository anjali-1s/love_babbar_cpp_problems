// write a program to find the pivot element of an array
#include <iostream> 
using namespace std;

int getpivotelement(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while( s < e){
        if(arr[mid] >=  arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int main(){
     int arr[4]={ 3,4,8,9};
     int n=4;
     int ans = getpivotelement(arr,4);
     cout<<" The pivot element is :"<<ans<<endl;
     }