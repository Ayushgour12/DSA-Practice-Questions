#include<iostream>
using namespace std;
int smallest(int arr[] , int size ){
    int small = INT16_MAX;
    for(int i=0; i<size; i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }
    return small;
}
int main(){
    int arr[]  = {1,2,3,4,5,6,7,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<smallest(arr , size)<<endl;
    return 0;
}