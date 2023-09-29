#include<iostream>
using namespace std;
int main(){
int number , temp = 0;
cout<<"Enter a number to find wether it is prime or not : "<<endl;
cin>>number;


for(int i=2; i<number; i++){
      if(number % i == 0){
        temp = 1;
        break;
      }
}

if(temp == 1){
    cout<<"The given number is not a prime number : "<<endl;
}
else{
    cout<<"The given number is prime"<<endl;
}



    return 0;
}