#include<iostream>
using namespace std;
int product(int arr[] , int size){
    int i=0; 
    int j=size-1;
    int prefix = 1;
    int suffix = 1;
    int maxi = INT16_MIN;
    int max0 = INT16_MIN;
    while(i<size-1 || j>=0){
         prefix  = prefix * arr[i];
         suffix = suffix * arr[j];
            max0 = max(prefix , suffix);
            maxi = max(max0 , maxi);
         if(prefix==0){
            prefix  = 1;
         }
         if(suffix == 0){
            suffix = 1;
         }
         i++;
         j--;
    }
    return maxi;
}
int main(){
     int arr[] = {1,2,3,4,5,0};
  int size = sizeof(arr) / sizeof(arr[0]);
 
  cout<<product(arr , size)<<endl;
    return 0;
}