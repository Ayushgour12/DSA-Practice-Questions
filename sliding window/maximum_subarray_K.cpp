#include<iostream>
using namespace std;
int subarray(int arr[] , int k, int size){
    int i=0;
    int j=0;
    int sum = 0;
    int maxi = INT16_MIN;
    while(j<=size){
        if(j-i+1 <= k){
        sum = arr[j] + sum;
            j++;
        }
        else{
            maxi = max(sum , maxi);
            sum = sum - arr[i];
            i++;
            
        }

    }
    return maxi;

}
int main(){
   
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);
   cout<< subarray(arr , 5 , size);
    return 0;
}