#include<iostream>
using namespace std;
bool isSorted(int *arr , int size){

    
    if(size <= 1){
        return true;
    }
       bool ans;
    if(arr[0] > arr[1]){
        return false;
    }
    else{      
   ans =  isSorted(arr+1 , size-1);
     
    }
      return ans;
}
int main(){
    int arr[] = {1,2,3,4,7,6,7};
     int size = sizeof(arr) / sizeof(arr[0]);
    if(isSorted(arr , 7)){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"It is not sorted"<<endl;
    }
    return 0;
}