// Book alllocation problem
#include <iostream>

using namespace std;

// ispossible function
bool ispossible(int arr[],int m, int n, int mid){
    int studentcount=1;
    int pagesum=0;
    for(int i=0; i<n; i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcount++;
        if(studentcount > m || arr[i]>mid){
            return false;
        }
        pagesum=arr[i];
        }
    }
    return true;    
}


int allocatebooks(int arr[],int n,int m){
    int min=0;
    int sum=0;

    // sum of the elements of the given array
    for(int i=0; i<n; i++){
        sum= sum + arr[i];
    }

    int max=sum;
    int mid=min+(max-min)/2;
    int ans=-1;
    while(min<=max){
        mid=min+(max-min)/2;
       if(ispossible(arr,m,n,mid)){
        ans=mid;
        max=mid-1;
       }
       else{
       min=mid+1;
       }
    }
    return ans;

}

// main function
int main(){
    int arr[4]={10,20,30,40};
    int n=4;
    int m=2;
    int result=allocatebooks(arr,n,m);
    cout<<result;
    return 0;
}
