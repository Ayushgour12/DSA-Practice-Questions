#include<iostream>
using namespace std;

bool prime(int element){
    for(int i=2; i<element; i++){
        if(element % i == 0){
            return 0;
        }
    }
    return 1;
}
void check_prime(int arr[][3] , int row , int col){
    int element=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            element = arr[i][j];
            if(prime(element)){
                cout<<element<<endl;
            }
        }
    }
}
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    check_prime(arr , 3 , 3);
    return 0;
}