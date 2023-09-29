#include<iostream>
using namespace std;
int linear_search(int arr[3][4] , int element){
      int temp = 0;
         for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
           if(element == arr[i][j]){
            temp = 1;
            break;
           }
        }
        
    }
    if(temp == 1){
        cout<<"Element is present in the array"<<endl;
    }
    else{
    cout<<"Element is not present in the array"<<endl;
    }
}

int main(){

    int arr[3][4] = {1,2,3,4,5,6,7,8,9};
    linear_search(arr ,11 );


    

    return 0;
}