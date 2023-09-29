#include<iostream>
using namespace std;
int remove_duplicate(int arr[] , int size){
    int i=0;
    for(int j = 1; j<size; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
     
}
int main(){
    int arr[] = {1,1,1,2,3,3,3,5,6,7,7,7};
    int size = sizeof(arr) / sizeof(arr[0]);

  int k =  remove_duplicate(arr , size);
  for(int i=0; i<k; i++){
    cout<<arr[i]<<endl; 
  }
    return 0;
}