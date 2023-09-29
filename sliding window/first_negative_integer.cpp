#include<iostream>
using namespace std;
int subarray(int arr[] , int k, int size){
    int i=0;
    int j=0;
    int sum = 0;
   
    while(j<=size){
      int flag = 0;
        if(j-i+1 <= k){
        j++;
        }
        else{
            if(sum == j && flag == 0){
              cout<< 0;
            }   
            if(arr[sum] < 0 && sum<j){
              flag = 1;
              cout<<arr[sum]<<endl;
              i++;
              sum = i;
            }
            else {
              sum++;
            }
            
        }

    }
    

}
int main(){
     int arr[] = {12,-1,-7,8,-16,30,16,28};
   
    int size = sizeof(arr) / sizeof(arr[0]);
   cout<< subarray(arr , 3 , size);
    return 0;
}