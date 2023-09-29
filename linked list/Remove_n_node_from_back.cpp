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

Node *deleteNnode(Node * &head , int pos){
    Node *ptr = head;
    if(head == NULL){
        return NULL;
    }
    int temp = length(head);
     
    int count = temp - pos;
   if(count == 1){
            head = head->next;
            return head;

   }
    while(count>1){
        ptr = ptr->next;
        count--;
    }
    ptr->next = ptr->next->next;

      return head;
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
int main(){
    Node *head = new Node(1);
  
        InsertAthead(head , 5);
        InsertAthead(head , 10);
        InsertAthead(head , 15);       
        InsertAthead(head , 20);
        InsertAthead(head , 25);
        InsertAthead(head , 30);
       
      
     head =  deleteNnode(head , 6);
     traverse(head);
       
    return 0;
}