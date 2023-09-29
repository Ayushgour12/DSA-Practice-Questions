#include<iostream>
using namespace std;
int main(){

int range=1000;


for(int i=1; i<range; i++){
    int rem = 0;
int sum = 0;
    int temp;
    temp = i;
  while(temp>0){
          rem = temp % 10;
          sum = (rem*rem*rem) + sum;
          temp = temp / 10;
    }

  if(sum == i){
    cout<<"Palindorme number is : "<<i <<endl;
   }

}
    return 0;
}