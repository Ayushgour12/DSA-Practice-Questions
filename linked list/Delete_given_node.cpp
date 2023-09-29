#include<iostream>
using namespace std;
class Node{
     public:
     int data;
     Node *next;

     Node(int data){
        this->data = data;
        this->next = NULL;
     }
};

Node *InsertAttail(Node* &tail , int data){
      Node *newnode = new Node(data);
      tail->next = newnode;
      tail = newnode;
}

Node* InsertAthead(Node* &head , int data){
     Node *newnode = new Node(data);
     newnode->next = head;
     head = newnode;
     
}
int length(Node *head){
   
     Node *temp = head;
     int count = 0;
     while(temp != NULL){
          count++;
          temp = temp->next;
          
     }
       
     return count;
} 

Node* reverse(Node* &head){
     Node *curr = head;
     Node *prev = NULL;
     Node *next;
     while(curr != NULL){
           next= curr->next;
          curr->next = prev;
          prev = curr;
          curr = next;
     }
     return prev;
}

void traverse(Node *&head){
     Node *temp = head;
     while(temp != NULL){
          cout<<temp->data<<" ";
          temp = temp->next;
     }
}

Node * removeGivenNode(Node * &node ){
    if(node == NULL && node->next == NULL){
        return NULL;
    }       
             
            node->data = node->next->data;
            node->next = node->next->next;
           
             
             return node;
}
int main(){
    Node *head = new Node(1);
  
        InsertAthead(head , 5);
        InsertAthead(head , 10);
        InsertAthead(head , 15);
        Node* temp = head;       
        InsertAthead(head , 20);
        InsertAthead(head , 25);
        InsertAthead(head , 30);
       
       removeGivenNode(temp);
      traverse(head);
    
       
    return 0;
}