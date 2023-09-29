#include<iostream>
using namespace std;
void rotate(int arr[][3] , int row , int col){
       // first i will transpose it
       if(row == col){
       for(int i=0; i<row; i++){
        for(int j=i; j<col; j++){
            swap(arr[i][j] , arr[j][i]);       // transpose
        }
       }
       // Now reverse the array
                for(int i=0; i<row; i++){
                int    l=0;
                int  r=col-1;
                    while(l<r){
                        swap(arr[i][l] , arr[i][r]);
                        r--;
                        l++;
                    }
                }
       }
}
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    rotate(arr , 3,3);
    cout<<endl;
    cout<<endl;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}