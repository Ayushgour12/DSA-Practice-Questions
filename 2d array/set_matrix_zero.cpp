#include<iostream>
using namespace std;

void setZero(int arr[3][3], int row , int col){
        int x = 1;
        int y = 1;
        
        for(int i=0; i<row; i++){
            if(arr[i][0] == 0){
                x = 0;
            }
        }

        for(int j=0; j<col; j++){
            if(arr[0][j] == 0){
                y = 0;
            }
        }
        
        for(int i=1; i<row; i++){
            for(int j=1; j<col; j++){
            if(arr[i][j] == 0){
                  arr[0][j] = 0;
                  arr[i][0] = 0;
            }
            }
        }

     for(int i=1; i<row; i++){
            if(arr[i][0] == 0){
                for(int j=0; j<col; j++){
                    arr[i][j] = 0;
                }
            }
        }

        for(int j=1; j<col; j++){
            if(arr[0][j] == 0){
                for(int i=1; i<row; i++){
                    arr[i][j] = 0;
                }
            }
        }

        if(x == 0){
            for(int j=0; j<row; j++){
                arr[j][0] = 0;
            }
        }
        if(y == 0){
            for(int i=0; i<col; i++){
                arr[0][i] = 0;
            }
        }
}



int main(){



int arr[3][3] = {1,2,3,4,5,6,0,2,4};


int row = 3;

int col = 3;



setZero(arr , row , col);

for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}





    return 0;
}