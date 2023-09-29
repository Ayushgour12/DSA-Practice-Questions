#include<iostream>
using namespace std;
   int two_pow(int x){
    
       if(x==0){
        return 1;
       }
       
      int sum = two_pow(x-1);
       sum = 2 *sum;
       
      
       return sum;
       
   }
int main(){
    int x = 5;

    cout<<two_pow(x)<<endl;
    return 0;
}