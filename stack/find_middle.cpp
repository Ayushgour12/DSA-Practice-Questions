#include<iostream>
#include<stack>
using namespace std;

int findMiddle(stack<int>s , int size1 ){
        
         if((size1/2) + 1 == s.size()){
            cout<< s.top()<<endl;
            return 0;
         }
         
         int element = s.top();
         s.pop();
         // Recursive call
         
         findMiddle(s , size1);

         // entering the element

         s.push(element);

        
  
}

int main(){

stack<int>s; 

s.push(4);
s.push(3);
s.push(2);
s.push(1);

int size1 = s.size();

 findMiddle(s , size1);


    return 0;
}