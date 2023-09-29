// A STRONG NUMBER IS A NUMBER WHOSE SUM OF FACTOR OF DIGIT IS EQUAL TO ITSLEF
//EXAMPLE --- 145 
#include<iostream>
using namespace std;
int main(){
    int sum2 = 0;
    int num = 142;
    int temp = num;
    int rem = 0;

    while(num != 0){
        int sum = 1;
    rem = num % 10;
    
    for(int i=rem; i>1; i--)
        sum = sum * i;
    
    sum2 = sum2 + sum;

    num = num / 10;
    }
    

    if(sum2 == temp){
        cout<<"Given number is strong number"<<endl;
    }
    else{
         cout<<"Given number is not strong number"<<endl;
    }
    return 0;
}