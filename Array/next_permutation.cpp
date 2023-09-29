#include<iostream>
#include<algorithm>
using namespace std;
int next_permuatation(int arr[] , int size){
         if(size == 1){
            return arr[0];
         }
         int temp = 0;
         int inf;
         for(int i=size-1; i>0; i--){
            if(arr[i]>arr[i-1]){        
                inf = i-1;
               temp = 1;
            }
         }
        
         if(temp == 0){
            reverse(arr , arr+size);
            return 1;
         }
        int inf2;
             for(int i=size-1; i>0; i--){   

            if(arr[inf]<arr[i]){
              inf2 = i;
              break;
            }
         }
          
         swap(arr[inf] , arr[inf2]);
        
         reverse(arr+inf+1 , arr+size);
}
int main(){
    int arr[] = {7,2,5,3,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    next_permuatation(arr,size);
       for(int i=0; i<size; i++){
        cout<<arr[i];
       }
     return 0;
}