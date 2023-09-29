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
Node *InsertAtmiddle(Node* &head ,Node* &tail, int data , int position){
     int count = position - 2;
     Node* newnode = new Node(data);
     Node *temp = head;
     if(position == 1){
          InsertAthead(head,data);
     }
     else if(length(head) == position){
            InsertAttail(tail,data); 
     }
     else{
          while(count--){
               temp = temp->next;
          }
         newnode->next = temp->next;
         temp->next = newnode;
     }
     
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
          cout<<temp->data<<endl;
          temp = temp->next;
     }
}
int main(){
    Node *head = new Node(13);
    Node *tail = head;
        InsertAthead(head , 15);
        InsertAttail(tail , 10);
        InsertAtmiddle(head , tail , 11 , 2);

      head = reverse(head);
     traverse(head);
    return 0;
}