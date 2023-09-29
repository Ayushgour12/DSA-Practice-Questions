#include<iostream>
using namespace std;
int second_smallest(int arr[] , int size ){
    int small = INT16_MAX;
    int sml2= small ;
    for(int i=0; i<size; i++){
        
        if(arr[i] < small){
            sml2 = small;
            small = arr[i];     
        }
          else if(arr[i] < sml2 && arr[i] != small)
       {
          sml2 = arr[i];
       }
        
    }
    return sml2;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout<<second_smallest(arr, size)<<endl;
    
    return 0;
}