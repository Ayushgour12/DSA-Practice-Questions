#include<iostream>
#include<algorithm>
using namespace std;
void repeating(int arr[] , int size ){
    int temp = INT16_MAX ;
    for(int i=0; i<size-1; i++){

         if(arr[temp] != arr[i]){

         if(arr[i] == arr[i+1]){    
            temp = i;  
            cout<<arr[i]<<endl;
         }
            
         }
    }
}
int main(){
    int arr[] = {1,1,1,1,2,4,4,5,6,7,7,8,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr , arr+size);
    repeating(arr , size);
    return 0;
}