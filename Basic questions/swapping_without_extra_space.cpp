#include<iostream>
using namespace std;
int main(){
    int a  = 25 ;
    int b = 30;

   int sum = a+b;
    b = sum - b; 
    a = sum - a;

    cout<< a <<endl;
    cout<<b <<endl;
    return 0;
}