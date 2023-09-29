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


Node *Reverse1(Node * &head , Node * prev){
   
    if(head->next  == NULL){
        head->next = prev;
        return head;
    }
    Node *curr = head;
    Node *nexti;
    
    nexti = curr->next;
    curr->next = prev;
    prev = curr;
    curr = nexti;

    head = Reverse1(curr , prev);
    return head;
}



Node *Reverse2(Node * &head){
   
    if(head == NULL || head->next  == NULL){      
        return head;
    }

    Node *chotahead = Reverse2(head->next);
     
     head->next->next = head;
     head->next = NULL;
    
    return chotahead;
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
// Node* reverse(Node* &head){
//      Node *curr = head;
//      Node *prev = NULL;
//      Node *next;
//      while(curr != NULL){
//            next= curr->next;
//           curr->next = prev;
//           prev = curr;
//           curr = next;
//      }
//      return prev;
// }

void traverse(Node *&head){
     Node *temp = head;
     while(temp != NULL){
          cout<<temp->data<<endl;
          temp = temp->next;
     }
}
int main(){
    Node *head = new Node(3);
    Node *tail = head;
        InsertAthead(head , 2);
       InsertAthead(head , 1);
     Node *prev = NULL;
      head = Reverse2(head);
     traverse(head);
    return 0;
}