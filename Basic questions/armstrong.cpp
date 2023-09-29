#include<iostream>
using namespace std;
int main(){

int num = 153;
int temp = num;
int rem = 0;
int sum = 0;

while(num>0){
          rem = num % 10;
          sum = (rem*rem*rem) + sum;
          num = num / 10;
}

if(sum == temp){
    cout<<"The number is palindrome"<<endl;

}
else{
    cout<<"The number is not a palindrome"<<endl;
}
    return 0;
}