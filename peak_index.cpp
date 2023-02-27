// write a program to find the peak element of a mountain array
#include <iostream>
using namespace std;

int peakelement(int arr[], int n){
                    int s=0;
                    int e = n-1;
                    int mid=s+(e-s)/2;
                    while(s < e){
                        if(arr[mid] < arr[mid+1]){
                            s=mid+1;
                        }
                        else{
                            e=mid;
                        }
                        mid=s+(e-s)/2;
                    }
                    return s;

}


int main(){
         int arr[4]={ 3,4,6,8};
         int n = 4;
         int ans = peakelement(arr,4);
         cout<<" the peak element of a mountain array is :"<<ans<<endl;
         return 0;
}