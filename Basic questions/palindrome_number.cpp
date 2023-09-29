#include<iostream>
using namespace std;
int main(){
      
      int num = 20021;
      int temp = num;
int rem=0 , sum=0;
      while(num>0){
        rem = num % 10;
        sum = rem + (sum*10);
        num = num / 10;
      }
 if(sum == temp){
    cout<<"number is palindrome"<<endl;

 }
 else{
    cout<<"The number is not palindorme"<<endl;
 }

       return 0;
}