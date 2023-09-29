#include<iostream>
using namespace std;
int main(){
    int num = 5;
    int temp = num ;
    int mask =0 ;
    if(num == 0){
        return 1;   //edge case
    }
    while(temp != 0){

        mask = (mask<<1) | 1;       // using or operator in mask to convert last bits into 1 and also using left shift
        temp = temp >> 1;
    }

   int ans = ~num & mask;
    return 0;
}