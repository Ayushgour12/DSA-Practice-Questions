#include<iostream>
#include<cmath>

using namespace std;

int power( int a){
    int x = 1;
  if(a == 0){
    return 1;
  }
  
    for(int i=0; i<a; i++ ){
         x = x*10;
         
    }
    return x;
}
int main(){
  //   int num = 5;
    
  //   int ans = 0;
  
  //   int i = 0;
  //   while(num != 0){

  //     int  bit = num & 1;  // also write as num %2
          
  //       ans = bit * power(i) + ans;
  //       cout<<ans<<endl;
  //       num = num >> 1;  // also write as num / 2

  //       i++;
  //   }
  //  cout<<ans<<endl;
int num = 5;

  cout<<sqrt(num);
    return 0;
}