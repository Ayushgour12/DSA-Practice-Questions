#include<iostream>
#include<algorithm>
using namespace std;
bool binary(int arr[] , int size, int element ){
    int low = 0;
    int high = size-1;
    int mid;
   
    while(low <= high){
      mid =   low + (high - low)/2;
     
        if(arr[mid] == element){
            cout<<mid+1<<endl;
            return true;
        }
        else if(element < arr[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return false;
}

int main(){
    int arr[] = {20,15,26,2,98,6};
   
    int size = sizeof(arr) / sizeof(arr[0]);
     int arr2[size];

      copy (arr, arr+size, arr2);
      sort(arr2 , arr2+size);
     
     for(int i=0; i<size; i++){
        int element = arr[i];
        binary(arr2 , size , element);
     }

    return 0;
}