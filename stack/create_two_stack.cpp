#include<iostream>
using namespace std;
class stack{

    public: 

    int *arr;
    int top1;
    int top2;
    int size;

    stack(int size){
         arr = new int[size];
         top1 = -1;
         top2 = size;
         this->size = size; 
    }

   void pushback(int data){
        if(top2-top1> 1){
            top1++;
          arr[top1] = data;
           
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
   }
   
   void pop(){
       
       if(top1 <= -1){
        cout<<"STACK UNDERFLOW"<<endl;
       }
       else{
        top1--;
       }

   }
  
   void push1(int data){
        if(top2 > top1){
            arr[top2] = data;
            top2--;
        }
        else{
             cout<<"Stack Overflow"<<endl;  
        }
   }
  
  void pop2(){
       if(top2 > size){
           
           cout<<"Under flow"<<endl;
       }
       else{
         top2++;
       }
  }
  bool isEmpty(){
     if(top1 <= -1){
        return true;
     }
     else{
        return false;
     }
   }

};


int main(){

  stack s(10);                   
    s.pushback(4);
    s.pushback(3);
    s.pushback(2);
    s.pushback(1);

    return 0;
}