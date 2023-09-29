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
int main(){
    stack<int> s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
   s. push(1);
 
  int element = 10;
  insertAtmiddle(s , element);

  while(!s.empty()){
        cout<<s.top()<< " ";
        s.pop();
}
  
    return 0;
}