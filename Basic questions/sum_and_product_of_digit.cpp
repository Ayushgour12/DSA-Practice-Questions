#include<iostream>
using namespace std;
int main(){
    int num = 234;
    int temp = num;
   int sum = 1;
   int sum2 = 0;
   int rem = 0;
    while(temp != 0){
        rem = temp % 10;
        sum = rem * sum;
        sum2 = rem + sum2;
        temp = temp / 10;
    }
    cout<<sum - sum2<<endl;
    
    return 0;
}