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









Node* reverse(Node* &head , int k){
     Node *curr = head;
     Node *prev = NULL;
     Node *next;
         if(head == NULL){
             return head;
         }
     int count = 0;
     while(curr != NULL && count < k){
           next= curr->next;
          curr->next = prev;
          prev = curr;
          curr = next;
          count ++;
     }

     if(curr != NULL)
     head->next = reverse(curr ,  k);

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
    Node *head = new Node(6);
    Node *tail = head;
        InsertAthead(head , 5);
       InsertAthead(head , 4);
        InsertAthead(head , 3);
         InsertAthead(head , 2);
          InsertAthead(head , 1);
     Node *prev = NULL;
      head = reverse(head , 3);
     traverse(head);
    return 0;
}