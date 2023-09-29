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

Node *Intersection(Node* &head  , Node* &head2){
           
           Node *first = head;
           Node *second = head2;
 int count1  , count2 = 0;
        count1 = length(first);
        count2 = length(second);
      
      int diff = abs(count1 - count2);
             
         if(count1<count2){
          while(diff--){
               second = second ->next;
          }
         }
         else{
          while(diff--){
               first = first->next;
          }
         }
             
             
      while(first != NULL && second != NULL){
           if(first == second){
               return first;
           }
         first = first->next;
         second = second->next;
      }
       return NULL;



}
int main(){
    Node *newnode = new Node(1);
    Node *head = newnode;
    Node *tail = head;
        InsertAthead(head , 5);
        InsertAthead(head , 10);
        InsertAthead(head , 15);
           InsertAttail(tail , 31);
           InsertAttail(tail , 41);
           InsertAttail(tail , 51);
           InsertAttail(tail , 61);
         
        Node *newnode1 = new Node(17);  
        Node *head1 = newnode1;  
        InsertAthead(head1 , 20);
        InsertAthead(head1 , 25);
        InsertAthead(head1 , 30);
       newnode1->next = newnode;
       
       
    Node *ptr = Intersection(head , head1);
   
       traverse(ptr);
    return 0;
}