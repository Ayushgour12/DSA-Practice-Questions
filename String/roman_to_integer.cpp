#include<iostream>
using namespace std;
void print(int number){
    
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string str[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;   
    while(number>0)
    {
      int div = number/num[i];
      number = number%num[i];
      while(div--)
      {
        cout<<str[i];
      }
      i--;
    }
}

int main(){
    int number = 3549;
    print(number);
    
    return 0;
}