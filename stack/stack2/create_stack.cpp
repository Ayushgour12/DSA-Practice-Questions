#include<iostream>
using namespace std;

class stack{
 
 public:
    int *arr;
    int top;
    int size;
     
     stack(int size){
        arr = new int[size];
        top = -1;
        this->size = size;

     }
     void push(int data){
        if(size-top > 1){
            top++;
            arr[top] = data;
        }
        else{
           cout<<"Stack overflow" ;
        }
     }
     void pop(){
             if(top <= -1){
                cout<<"Stack underflow"<<endl;
             }
             else{
                top--;
             }
     }

     int gettop(){
        if(top == -1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            return arr[top];
        }
     }

     bool isEmpty(){
        if( top <= -1){
            
            return true;
        }
        else{
            return false;
        }
     }

     int getsize(){
           return top;
     }
};
int main(){
stack s(10);

s.push(9);
s.push(8);
s.push(7);
s.push(6);
s.push(5);
s.push(3);
s.push(2);
s.push(1);
s.push(0);

while(!s.isEmpty()){
        cout<<s.gettop()<< " ";
        s.pop();
}

    return 0;
}