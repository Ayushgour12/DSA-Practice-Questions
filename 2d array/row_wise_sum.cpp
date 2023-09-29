#include<iostream>
using namespace std;
void rowSum(int arr[][3] , int row , int col){
int sum=0;
    for(int row=0; row<3; row++){
      
        for(int col=0; col<3; col++){
           sum = sum + arr[row][col];
          
        }
        cout<< "Row "<<row<<" sum is : "<<sum<<endl;  
        sum = 0;
    }
}
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};

      rowSum(arr , 4 , 3);
    return 0;
}