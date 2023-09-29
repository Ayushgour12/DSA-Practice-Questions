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
void traverse(Node *&head){
     Node *temp = head;
     while(temp != NULL){
          cout<<temp->data<<" ";
          temp = temp->next;
     }
}
Node *sorting(Node *curr){
 Node *zerohead = new Node(-1);
    Node *zerotail = zerohead;
    Node *firsthead = new Node(-1);
    Node *firsttail = firsthead;
    Node *secondhead = new Node(-1);
    Node *secondtail = secondhead;

while(curr != NULL){

    int val = curr->data;
    if(val == 0){
        InsertAttail(zerotail , 0);
    }
    else if(val == 1){
        InsertAttail(firsttail , 1);
    }
    else{
        InsertAttail(secondtail , 2);
    }
    curr = curr->next;
}

    if(firsthead->next != NULL){
              zerotail->next=firsthead->next;
              if(secondhead->next != NULL){
                  firsttail->next = secondhead->next;
              }
    }
    else{
        if(secondhead->next != NULL){
                  zerotail->next = secondhead->next;
    }
    }
curr = zerohead->next;
delete zerohead;
delete firsthead;
delete secondhead;

return curr;

}
Node *sort(Node* head){

    Node *curr = head;

  head = sorting(curr);
 return head;

}













int main(){
    Node *newnode = new Node(13);
    Node *head = newnode;
  
        InsertAthead(head , 11);
        InsertAthead(head , 9);
        InsertAthead(head , 7);
          InsertAthead(head , 5);
        InsertAthead(head , 3);
        InsertAthead(head , 1);

      Node *newnode1 = new Node(0);
    Node *head1 = newnode1;
     InsertAthead(head1 , 1);
        InsertAthead(head1 , 2);
        InsertAthead(head1 , 1);
          InsertAthead(head1 , 1);
        InsertAthead(head1 , 0);
        
    
   
 
head1 = sort(head1);
 traverse(head1);
    return 0;
}