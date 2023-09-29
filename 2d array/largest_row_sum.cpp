#include<iostream>
using namespace std;
int rowSum(int arr[][3] , int row , int col){
int sum=0;
int maxi = INT16_MIN;
    for(int row=0; row<3; row++){
      
        for(int col=0; col<3; col++){
           sum = sum + arr[row][col];
          
        }
        maxi = max(sum , maxi);
        sum = 0;
    }
    return maxi;
}
int main(){
     
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
     cout<< rowSum(arr , 4 , 3)<<endl;

    return 0;
}