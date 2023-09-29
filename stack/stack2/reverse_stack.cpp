#include<iostream>
#include<stack>
using namespace std;

void insertAtmiddle(stack<int> &s , int element){

    if(s.empty()){
        s.push(element);
        return;
   }
   int element1 = s.top();
  
   s.pop();
    insertAtmiddle(s , element);

    s.push(element1);
}
void reverse(stack<int> &s ){
    if(s.empty()){
          return;
    }
    int element = s.top();
    s.pop();
    reverse(s);

    insertAtmiddle(s , element);
}
int main(){
    stack<int> s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
   s. push(1);
 
  
  reverse(s );

  while(!s.empty()){
        cout<<s.top()<< " ";
        s.pop();
}
  
    return 0;
}