// write a program to sort an array through quick sort 
#include <iostream>
using namespace std;

// partitioning function ------->>
int partition( int arr, int s, int e){
         int pivot = arr[s];
         int count = 0;
         // for counting of that numbers which are less than pivot element 
         for ( int i=s+1 ; i<=e ; i++){
            if(arr[i] <= pivot){
                count++;
            }
         }

         // place pivot at right position 
         int pivotIndex = s + count;
         swap(arr[pivotIndex] , arr[s]);
         
         // pivotIndex s left aur right wale part ko sort krenge 
         int i= s, j=e;
         while( i < pivotIndex && j > pivotIndex ){
               while ( arr[i] <= pivot){
                i++;
               }
               while ( arr[j] > pivot){
                j--;
               }
               if ( i < pivotIndex && j > pivotIndex){
                swap(arr[i++] , arr[j--]);
               }
         }
         return pivotIndex;
}


// quicksort function --------->>
void quicksort ( int arr[], int s, int e){
          // base case
          if(s >= e){
            return ;
          }
          // partition krenge
          int p = partition ( arr, s, e);
          
          // left part sort kro
          quicksort( arr, s, p-1);

          // right part sort kro
          quicksort( arr, p+1, e);
    }


int main() {
          int arr[10]={1,5,4,3,2,0,6,7,6,5};
          int n = 10;

          quicksort(arr , 0 , n-1);

          for( int i=0 ; i<n ; i++){
            cout<<arr[i]<<" ";
          }

          cout<<endl; 

          return 0;
}
