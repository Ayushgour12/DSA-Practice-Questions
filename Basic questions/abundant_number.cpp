// if the sum of the divisor of a number is greater then the num then it's a abundant number
#include<iostream>
using namespace std;
int main(){
     int num = 12;
    int sum = 0;
    for(int i=1; i<num; i++){
        if(num % i == 0){
            sum = sum + i;
        }
    }
    if(num < sum){
        cout<<"IT's a abundant number"<<endl;
    }
    else{
        cout<<"It is not an abundant number"<<endl;
    }
    return 0;
}