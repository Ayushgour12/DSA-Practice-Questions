#include<iostream>
using namespace std;
void wave(int arr[][3] , int rows , int cols){

    for(int col=0; col<cols; col++){
        if(col&1){
               for(int row=rows-1; row>=0; row--){
                cout<< arr[row][col]<<" ";
                
               }
        }
        else{
               for(int row=0; row<rows; row++){
                cout<< arr[row][col]<<" ";
               }
        }
        cout<<endl;
    }
}
int main(){
     int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
     wave(arr , 4, 3);
    return 0;
}