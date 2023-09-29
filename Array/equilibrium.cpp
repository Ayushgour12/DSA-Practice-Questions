#include<iostream>
using namespace std;
int equilibrium(int arr[] , int n , int total){
    int rightsum = total;
    int leftsum = 0;
    for(int i=0; i<n; i++){
           rightsum = rightsum - arr[i];
           if(leftsum == rightsum){
            return i;
           }
           leftsum = leftsum + arr[i];
    }
}
int main(){
    int arr[] = {1,2,6,4,0,-1};
    int sum=0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    cout<<equilibrium(arr , size , sum);
    
    return 0;
}