#include<iostream>
using namespace std;
bool binary(int arr[][3] , int row , int col , int target){
       int low = 0;
       int mid;
       int high = row*col - 1;
         int element=0;
    while(low<=high){
        mid = (low + high) / 2;
        element = arr[mid/col][mid%col];
    if(target == element){
        cout<<"Element is found"<<endl;
         return 1;
    }
    else if(element < target){
        low = mid + 1;
    }
    else{
        high = mid - 1;
    }
    }
    cout<<"element is not found"<<endl;
}
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    binary(arr , 3 ,3 , 16);
    return 0;
}