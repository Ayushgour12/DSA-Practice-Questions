#include<iostream>
using namespace std;
int equilibrium(int arr[] , int size){
      int i=0;
      int j=size-1;
      int sum1 ;
      int sum2 = j;
      while(i<j){
      
       sum1 += arr[i];
       if(sum1 > sum2){
        j--;
        sum2 += j;
       }
       if(sum1 == sum2){
               return i+1;
       }
       i++;
      }
}
int main(){
    int arr[] = {2,3,5,6,2,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"The equilibrium point is "<<equilibrium(arr , size);
    return 0;
}