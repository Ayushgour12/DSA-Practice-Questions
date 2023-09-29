#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node *next;
  Node(int data){
    this ->data = data;
    this-> next =  NULL;
  }
};


  Node* reverse(Node* &head){

     Node *curr = head;
     Node *prev = NULL;
     Node *next;

     while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
     }
     return prev;
   }
Node *traverse(Node* &head){

    Node *temp = head;
      while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
      }
      
   }
   void insertAtMiddle(Node* &head , int data , int position){
       Node *temp = head ;
        Node *newnode = new Node(data) ;
       for(int i=0; i<position-2; i++){
        temp = temp->next;
       }
       newnode->next = temp->next;
       temp->next = newnode;
    
}

void InsertAthead(Node* &head , int data){
    Node* newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}
void InsertAttail(Node * &head , Node* &tail , int data){
    Node* newnode = new Node(data);
    if(head == NULL){
       head = newnode;
       tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
}
Node* sum(Node * first , Node *second){
    int carry = 0;
    Node *head = NULL;
    Node *tail = NULL;
    while(first != NULL && second != NULL){
      
              int sum1 = carry + first->data + second->data;
              
              int digit = sum1 % 10;
              Node *temp = new Node(digit);
              InsertAttail(head,tail, digit);
              carry = sum1 / 10;
              first = first->next;
              second = second->next;
    }
 
    
    while(first != NULL){
        int sum1 = carry + first->data;
              int digit = sum1 % 10;
              InsertAttail(head,tail, digit);
              carry = sum1 / 10;
              first = first->next;


    }
    while(second != NULL){
      
      int sum1 = carry + second->data;
              int digit = sum1 % 10;
              InsertAttail(head,tail,digit);
              carry = sum1 / 10;
              second = second->next;
    }
    while(carry != 0){
    
      int sum1 = carry;
      int digit = sum1 % 10;
              InsertAttail(head,tail,digit);
              carry = sum1 / 10;
              
    }
    return head;


}
Node * add(Node* &head , Node* &head1){
         
         Node* first = reverse(head);
         Node* second = reverse(head1);

      Node* addition = sum(first , second);
    addition  = reverse(addition);

     return addition;
      

}




int main(){
    Node *head = new Node(1);
    
     InsertAthead(head , 2);
     InsertAthead(head , 3);
     
     Node *head1 = new Node(2);
     InsertAthead(head1 , 3);
     InsertAthead(head1,5);
     InsertAthead(head1,7);

     Node *cal =add(head , head1);
    traverse(cal);
    return 0;
}