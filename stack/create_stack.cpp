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

   void pushback(int data){
        if(size-top> 1){
            top++;
          arr[top] = data;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
   }
   
   void pop(){
       
       if(top <= -1){
        cout<<"STACK UNDERFLOW"<<endl;
       }
       else{
        top--;
       }

   }
  
  int getsize(){
            
       return top;
  }
  
  int getelement(){
       if(top <= -1){
        cout<<"STACK UNDERFLOW";
       }
       else{
        return top;
       }
  }
   bool isEmpty(){
     if(top <= -1){
        return true;
     }
     else{
        return false;
     }
   }

   int gettop(){
    if(top == -1){
        cout<<"Stack overflow"<<endl;
    }
    else{
        return arr[top];
       
    }
   }
};
int main(){
    stack s(5);
    s.pushback(4);
    s.pushback(3);
    s.pushback(2);
    s.pushback(1);
     
     while(!s.isEmpty()){
      cout<< s.gettop();
       s.pop();
     }
    return 0;
}