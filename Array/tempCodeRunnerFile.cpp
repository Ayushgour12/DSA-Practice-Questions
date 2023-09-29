#include<iostream>
#include<vector>

using namespace std;
int main(){
    int num = 5;
    vector<int> v;
 int rem = num;
 int bit= 0;

while(rem < 0){
    bit = bit / 2;
    rem = rem % 10;
    v.push_back(bit);

}

for(int i=0; i<v.size(); i++){
    cout<<v[i]<<endl;
}
    return 0;
}