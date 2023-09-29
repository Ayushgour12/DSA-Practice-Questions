#include<iostream>
#include<math.h>
using namespace std;
int main(){

int num =  1010;

int ans = 0;
int i =0;

while(num != 0){
   int bit = num % 10;
    if(bit == 1){
        ans = pow(2,i) + ans;
        i++;
    }
    else{
        i++;
    }
    num = num / 10;
 

}
cout<<ans;















    return 0;
}