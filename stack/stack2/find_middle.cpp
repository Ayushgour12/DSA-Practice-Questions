#include<iostream>
#include<stack>
using namespace std;

void findMiddle(stack<int> s , int size){
    if( size/2+1 == s.size()){
        cout<<"Middle is : "<<s.top();
        return;
    }

    int element = s.top();
    s.pop();

    findMiddle(s , size);


  s.push(element);

}
int main(){
    stack<int> s;

    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
   s. push(1);
  int size = s.size();
 
  findMiddle(s ,size);
    return 0;
}