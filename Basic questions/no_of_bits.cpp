#include<iostream>
using namespace std;
int main(){
    int num = 5;
    int sum =0;
    int rem = 0;
    int count = 0;
    while(num > 0){

        num = num / 2;
        count++;
    }
    cout<<"No. of bits are : "<<count<<endl;
    return 0;
}