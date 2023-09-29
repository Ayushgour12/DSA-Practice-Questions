#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this -> next = NULL;

    }

};
int length(Node *head){
   
     Node *temp = head;
     int count = 0;
     while(temp != NULL){
          count++;
          temp = temp->next;
          
     }
       
     return count;
}
void InsertAtTail(Node* &tail , int data){
    Node* newnode = new Node(data);
    tail->next = newnode;
    tail = newnode;
}

Node* detect(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node *fast = head;
    Node* slow = head;
    while(fast != NULL && fast->next != NULL){
         fast =fast->next->next;
        slow = slow->next;
        
        if(slow == fast){
          //   cout<<"Loop is present"<<endl;
            return fast;
        }
    }
    cout<<"Loop is not present"<<endl;
    return NULL;
}
Node* delete1(Node* &head){
      Node *fast = head;
      Node *slow = head;

      if(detect(fast) == NULL){
        cout<<"No loop is present"<<endl;
      }
      else{
            fast=detect(fast);
      }
      Node *prev;
    while(slow != fast){
            prev = fast;
            slow = slow->next;
            fast = fast->next;
    }
         prev->next = NULL;
         return head;

}

void traverse(Node* &head){
      Node *temp = head;
      while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
      }
   }
 
  void InsertAtHead(Node* &head , int data){
         Node *newnode = new Node(data);
         newnode->next = head;
         head = newnode;
   }

   


   int main(){


  Node* newnode = new Node(55);
  Node* head = newnode;
  Node* tail = newnode;
 

    InsertAtTail(tail,5);
    InsertAtTail(tail,7);
    InsertAtTail(tail,9);
   Node* temp = tail;
    InsertAtTail(tail,11);
    InsertAtTail(tail,13);
    InsertAtTail(tail,14);
    InsertAtTail(tail,15);
   tail -> next = temp;
   
   delete1(head);
   traverse(head);
    return 0;
   }