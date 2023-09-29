#include<iostream>
using namespace std;
bool search(int arr[], int low , int high , int target){
    if(high < low){
        
        return false;
    }
    bool ans;
    int mid = (high + low) / 2;
  
    if(target == arr[mid]){
        ans = true; 
    }
    
    else if(target < arr[mid]){
        high = mid- 1;
        
       return search(arr , low , high , target);
        
    }
    else{
        low = mid+1;
      
      return  search(arr , low , high , target);
        
    }
    return ans;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int target = 5;
     if(search(arr , 0 , size -1, target)){
        cout<<"ELement is found"<<endl;
     }
     else{
        cout<<"ELement is not found"<<endl;
     }
    return 0;
}