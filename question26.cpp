// write a progarm to implement linear search in an array 
#include<iostream>
using namespace std;
bool linearSearch( int arr[], int n, int key){
    for ( int i=0 ; i<n ; i++){
        if(key==arr[i]){
            return true;
        }
        
 }
 return false;
    }

int main(){
        int arr[9]={ 2 ,4 ,68 ,9 ,-3 ,-6 ,0  ,19,12 };
        int n = 9;
        int key;
        cout<<" Enter the element to be search :"<<endl;
        cin>>key;
        bool found = linearSearch( arr,9,key);
        if(found){
            cout<<"the key element is present. "<<endl;
        }
        else{
            cout<<" the key element is not present."<<endl;
        }
        return 0;
}