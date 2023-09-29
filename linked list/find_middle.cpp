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
void findMiddle(Node* &head){

    Node* fast = head;
    Node* slow = head;
    
     while(fast != NULL && fast->next != NULL ){
         fast = fast->next->next;
        slow = slow->next;
       
    }
    cout<<slow->data<<endl;

}
void InsertAthead(Node* &head , int data){
    Node* newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}
void InsertAttail(Node* &tail , int data){
    Node* newnode = new Node(data);
    tail->next = newnode;
    tail = newnode;
}
int main(){
    Node *head = new Node(0);
    

     InsertAthead(head , 5);
     InsertAthead(head , 10);
     InsertAthead(head , 15);
     InsertAthead(head , 20);
    // InsertAthead(head , 25);
      traverse(head);
      cout<<endl;
      findMiddle(head);
    
    
    return 0;
}