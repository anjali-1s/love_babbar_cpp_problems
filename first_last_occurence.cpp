// write a program to find the first and last occurence of an element in a sorted array

#include <iostream>
using namespace std;

// first occurence function
int firstoccurence( int arr[], int key, int n){
                                int s=0;
                                int e=n-1;
                                int mid=s+(e-s)/2;
                                int ans = -1;
                                while(s<=e){
                                    if(arr[mid] == key){
                                       ans = mid;
                                       e = mid-1;
                                    }
                             else if(arr[mid] > key){
                                e = mid-1;        // left m jao
                             }
                             else if(arr[mid] < key){
                                s = mid+1;        // right m jao
                             }
                             mid = s+(e-s)/2;
                                }
                                return ans;
}


// last occurence function 
int lastoccurence(int arr[], int key, int n){
                             int s = 0;
                             int e = n-1;
                             int mid = s+(e-s)/2;
                             int ans = -1;
                             while(s <= e){
                                if(arr[mid] == key){
                                    ans = mid;
                                    s = mid+1;
                                }
                                else if(arr[mid] > key){
                                    e = mid-1;   // left m jao
                                }
                                else if (arr[mid] < key){
                                    s = mid+1;   // right m jao
                                }
                                mid = s+(e-s)/2;
                             }
                             return ans;
}


int main(){
    int arr[6]= {4,5,6,6,8,9};
    int n=6;
    cout<<" The first occurence of the element is at index :"<<firstoccurence(arr,6,6)<<endl;
    cout<<" The last occurence of the element is at index :"<<lastoccurence(arr,6,6)<<endl;
    return 0;
}