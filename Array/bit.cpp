#include<iostream>
#include<vector>

using namespace std;
int main(){
    int num = 5;
    vector<int> v;
 int rem = num;
 int bit= 0;

while(rem != 0){
    bit = rem % 2;
    rem = 10 % rem; 
    cout<<bit<<endl;
    
}


    return 0;
}