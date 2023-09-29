#include<iostream>
using namespace std;
int swapping(int arr[][3] , int row , int col){
    int mini = -1;
    int maxi = INT16_MAX;
    int I_mini=-1;
    int I_maxi=-1;
    int count = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(mini < arr[i][j]){
               mini = arr[i][j];  
                          
               I_mini = j;
               }
            if(maxi >arr[i][j]){
                maxi = arr[i][j];
                I_maxi = j;
            }   
        }
        
        swap(arr[i][I_mini] , arr[i][I_maxi]);
         mini = INT16_MAX;
           maxi =INT16_MIN;
    }
   
}
int main(){
    int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

     
    swapping(arr,4,3);

  for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}