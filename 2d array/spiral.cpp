#include<iostream>
using namespace std;
void spiral(int arr[][3] , int row , int col){
    int total = row*col;
    int sr = 0;
    int sc = 0;
    int er = row-1;
    int ec = col - 1;
    int count = 0;

    while(count < total){
        // for starting row
        for(int i=sc; i<=ec; i++){
             cout<<arr[sr][i]<<" ";
             count++;
        }
        sr++;
      // for ending col
        for(int i=sr; i<=er; i++){
            cout<<arr[i][ec]<<" ";
            count++;
        }    
        ec--;
        // for ending row

        for(int i=ec; i>=sc; i--){
            cout<<arr[er][i]<<" ";
            count++;
        }     
        er--;
         //for starting col
        for(int i=er; i>=sr; i--){
            cout<<arr[i][sc]<<" ";
            count++;
        }
        sc++;

    
       

    }
}
int main(){
     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
     
     spiral( arr , 3, 3);
    return 0;
}