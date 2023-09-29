// An automorphic number is a number whose square has the same digits in the end as the number itself --  example -> 25
#include<iostream>
using namespace std;
int main(){
    int num = 25;
    int rem = 0;
    int sum = 0;
    int flag = 0;
    int sqr = num * num;
   
   while(num != 0){
    int rem1 = num % 10;
    int rem2 = sqr % 10;
    if(rem1 != rem2){
        flag = 1;
        break;
    }
    num = num / 10;
    sqr = sqr / 10;
   }
     if(flag == 1){
        cout<<"The number is not an automorphic number"<<endl;
     }
     else{
         cout<<"The number is an automorphic number"<<endl;
     }
    return 0;
}