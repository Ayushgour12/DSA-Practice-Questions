#include<bits/stdc++.h>
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
          cout<<temp->data<<endl;
          temp = temp->next;
     }
}

 Node* removeDuplicate(Node* &head){
  
     Node *curr = head;

     while(curr != NULL && curr->next != NULL ){
             
             if(curr->data == curr->next->data ){
                  curr->next = curr->next->next;
             }
             else{
                curr = curr->next;
             }
       
         }
         return head;
     }
     
  
Node *removeduplicate(Node * &head ){
    if(head == NULL){
        return NULL;
            }

    unordered_set<int> str;
    Node *curr  = head;
       str.insert(curr->data);
while(curr != NULL && curr->next != NULL){
       //same
       if(str.find(curr->next->data) != str.end()){
                 curr->next = curr->next->next;
       }
       //not same
       else{
            str.insert(curr->next->data);
            curr = curr->next;
       }
}
return head;
}
int main(){
    Node *head = new Node(3);
    Node *tail = head;
    InsertAthead(head , 3);
          InsertAthead(head , 3);
        InsertAthead(head , 2);
        InsertAthead(head , 2);
           InsertAthead(head , 2);
        InsertAthead(head , 1);
       
        InsertAthead(head , 1);
        InsertAthead(head , 1);
       head = removeDuplicate(head);
      traverse(head);
    return 0;
}