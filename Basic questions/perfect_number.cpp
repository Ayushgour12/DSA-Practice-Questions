// A PERFECT NUMBER IS THAT IN WHICH ITS ALL DIVISOR SUM IS EQUAL TO THE NUMBER
// EXAMPLE ---- 6
#include<iostream>
using namespace std;
int main(){
    int num = 6;
    int sum = 0;
    for(int i=1; i<num; i++){
        if(num % i == 0){
            sum = sum + i;
        }
    }
    if(num == sum){
        cout<<"IT's a perfect number"<<endl;
    }
    else{
        cout<<"It is not a perfect number "<<endl;
    }
    return 0;
}