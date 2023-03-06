// cows aggresive
#include<iostream>
#include<algorithm>

using namespace std;

// checking ispossible solution
bool ispossible(int stalls[],int n, int k, int mid){
    int cowscount=1;
    int lastpos=0;
    for(int i=0; i<n; i++){
       if(stalls[i] - lastpos >=mid){
       cowscount++;
       if(cowscount==k){
        return true;
       }
       lastpos=stalls[i];
       }
   }
          return false;
}

int cowsaggresive(int stalls[],int n, int k){
      std::sort(stalls, stalls + n);
      int s=0;
      int maxi=0;
      for(int i=0; i<n; i++){
        maxi=max(maxi,stalls[i]);
      }
      int e=maxi;
      int ans=-1;
      int mid=s+(e-s)/2;
      while(s<=e){
        if(ispossible(stalls,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
      }
      return ans;
}

int main(){
  
   int stalls[5]={4,2,1,3,6};
   int k=2;
   int n=5;
    int result=cowsaggresive(stalls,n,k);
    cout<<result;
    return 0;
}