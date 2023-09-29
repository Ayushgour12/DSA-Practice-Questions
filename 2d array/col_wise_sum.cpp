#include<iostream>
using namespace std;
void colSum(int arr[][3] ){
int sum=0;
    for(int col=0; col<3; col++){
      
        for(int row=0; row<4; row++){
           sum = sum + arr[row][col];
          
        }
        cout<< "Row "<<col<<" sum is : "<<sum<<endl;
        sum = 0;
        
    }
}
int main(){
     int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
     colSum(arr );
    return 0;
}