#include<iostream>
#include<stack>
using namespace std;


void sorting(stack<int> &s , int element){

    if(s.empty()){
        s.push(element);
        return;
    }


   if(s.top() > element){
        s.push(element); 
        return;
   }
   else{
         int element1 = s.top();
         s.pop();
      sorting(s , element);
      s.push(element1);  
   }
}


void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }

    int element = s.top();
    s.pop();
    reverse(s);

    sorting(s , element);
}

int main(){

stack<int>s; 

s.push(7);
s.push(10);
s.push(5);
s.push(2);

int size1 = s.size();

 reverse(s);

 while(!s.empty()){
     cout<<s.top()<<endl;
     s.pop();
 }


    return 0;
}