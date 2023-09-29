#include<iostream>
using namespace std;
void reverse(int arr[] , int i , int j){
   
    
    while(i<j){
        swap(arr[i] , arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    int count = size - k -1;
    reverse(arr , 0 , size-1);
    reverse(arr, count , size-1);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
     }
    return 0;
}