#include<iostream>
using namespace std;
int largest(int arr[] , int size ){
    int big = INT16_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > big){
            big = arr[i];
        }
    }
    return big;
}
int main(){
    int arr[]  = {1,2,3,4,5,6,7,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<largest(arr , size)<<endl;
    return 0;
}