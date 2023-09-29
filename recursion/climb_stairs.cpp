#include<iostream>
using namespace std;
int stair(int x){
    if(x<0){
        return 0;
    }
if(x == 0){
    return 1;
}

return stair(x-1) + stair(x-2);

}
int main(){
    int x =3;
    cout<<stair(x)<<endl;
    return 0;
}