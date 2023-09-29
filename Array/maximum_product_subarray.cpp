#include<iostream>
using namespace std;
int product(int arr[] , int size ){
    int sum = 1;
    int maxi = INT16_MIN;
    for(int i=0; i<size; i++){
        sum = sum * arr[i];
        
         maxi = max(maxi , sum);
       if(sum == 0){
        sum = 1;
       }
        
    }
    return maxi;
}
int main(){
  int arr[] = {1, -3, -10, 0, 60};
  int size = sizeof(arr) / sizeof(arr[0]);
 
  cout<<product(arr , size)<<endl;
    return 0;
}