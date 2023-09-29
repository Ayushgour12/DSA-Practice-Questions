#include<iostream>
using namespace std;
int pow(int x , int y){
    if(y==1 ){
        return x;
    }
    if(y == 0){
        return 1;
    }

    if(y&1){
        int ans = x * pow(x,y/2) * pow(x , y/2);
    }
    else{
        int ans = pow(x,y/2) * pow(x,y/2);
    }
}
int main(){
    int x=3;
    int y = 4;
    cout<<pow(x,y);
    return 0;
}