#include<iostream>
using namespace std;
int main(){

int num = 10;
int  i = 0;
int j= 1;
int count = num - 2;
int temp = 0;


while(count>0){
     
     temp = i+j;
     i = j;
     j=temp;
     count--;
}

cout<<"the 7th fibonacci series is "<<temp<<endl;












    return 0;
}