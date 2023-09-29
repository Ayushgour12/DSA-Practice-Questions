#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int sum = 1;
    for(int i=x; i>0; i--){
         sum = sum * i;
    }
    cout<<sum;
    return 0;
}