#include<iostream>
using namespace std;
int main(){


 int num ;
 cout<<"Enter a number to reverse it : "<<endl;
 cin>>num;
                      //// MEANS IF WE HAVE SUM * 10 EXCEED THE INTEGER LENGTH THEN THAT COULD BE A PROBLEM , THEN 
                      /// IT MEANS =  SUM * 10 < INT_MAX WE CAN WRITE IT AS,
int rem=0 , sum=0;   //// if SUM > INT_MAX / 10;  THEN RETURN 0;
                      // SAME CONDITION FOR INT_MIN
                      //// IF SUM < INT_MIN / 10 THEN RETURN 0;
      while(num>0){
        rem = num % 10;
        sum = rem + (sum*10);
        num = num / 10;
      }

cout<<"Reversed number is sum : "<<sum<<endl;

    return 0;
}