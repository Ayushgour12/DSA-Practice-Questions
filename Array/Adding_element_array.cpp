#include<iostream>
using namespace std;
void start(int arr[] , int size , int value){
    for(int i=size-1; i>=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = value;
}
void middle(int arr[] , int size , int value , int pos){
    for(int i=size-1; i>pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = value;
}
void end(int arr[] , int size , int value){
    
    arr[size] = value;
}
int main(){
    int arr[12] = {10,20,30,40,50,60,70,80};
    int val1 = 43;
    int size = 8;
    end(arr, size , val1);
    for(int i=0; i<=size; i++)
      cout<<arr[i]<<endl;
    return 0;
}