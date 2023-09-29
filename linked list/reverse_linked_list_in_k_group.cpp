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


Node *InsertAtPosition(Node* &head ,Node* &tail, int data , int position){
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
Node* reverseKGroup(Node* head, int k) {
          if(length(head) < k){
                return head;
          }
        if(head==NULL)
        return NULL;
        Node* curr=head;
        Node* prev=NULL;
        Node* forward=NULL;
        int count=0;
        while(curr!=NULL && count<k)
        {
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        if(forward!=NULL)
        {
          head->next=reverseKGroup(forward,k);
        }
        return prev;
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
    int k = 3;
        Node *head = new Node(5);
    Node *tail = head;
        //InsertAthead(head , 5);
     //   InsertAthead(head , 10);
        InsertAthead(head , 4);
        InsertAthead(head , 3);
        InsertAthead(head , 2);
        InsertAthead(head , 1);
      //  traverse(head);
        
head = reverseKGroup(head , k);
  
      traverse(head);
    return 0;
}