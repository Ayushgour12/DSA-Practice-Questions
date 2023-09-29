#include<iostream>
#include<stack>
using namespace std;


int InsertAtlast(stack<int> &s , int element){

    if(s.empty()){
        s.push(element);
        return 0;
    }
    int element1 = s.top();
      s. pop();
    InsertAtlast(s , element);
    
       s.push(element1);
}

void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }

    int element = s.top();
    s.pop();
    reverse(s);

    InsertAtlast(s , element);
}

int main(){

stack<int>s; 

s.push(4);
s.push(3);
s.push(2);
s.push(1);

int size1 = s.size();

 reverse(s);

 while(!s.empty()){
     cout<<s.top()<<endl;
     s.pop();
 }


    return 0;
}