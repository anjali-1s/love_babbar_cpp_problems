// painter partition

#include<iostream>
using namespace std;

// ispossible function
 bool ispossible(int arr[], int n, int k, int mid){
   int  paintercount=1;
   int mintime=0;
   for(int i=0; i<n; i++){
    if(mintime+arr[i]<=mid){
        mintime=mintime+arr[i];
    }
    else{
    paintercount++;
    if(paintercount > 2 || arr[i] > mid){
        return false;
    }
    mintime=arr[i];
    }
    
   }
   return true;
 }

int painterpartition(int arr[], int n, int k){
    int s=0;
    int e=0;
    for(int i=0; i<n; i++){
        e=e+arr[i];
    }
    int mid=s+(e-s)/2;
    int ans=0;
    while(s<=e){
        if(ispossible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[4]={10,10,10,10};
    int k=2;
    int n=4;
    int result=painterpartition(arr,n,k);
    cout<<result;
    return 0;
}
