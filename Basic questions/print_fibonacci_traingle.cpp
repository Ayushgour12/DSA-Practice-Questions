#include<iostream>
using namespace std;
int main(){
   
    int num = 7;
   // int temp;

    for(int a = 0; a<num; a++){
         int i = 0;
         int j = 1;
         int temp = 0;
        for(int b=0; b<a; b++){
            temp = i + j;
              i = j;
              j= temp;
              cout<< temp <<" ";
        }
      

        cout<<endl;
    }
    return 0;
}