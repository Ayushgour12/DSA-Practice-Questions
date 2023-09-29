#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node *next;
  Node(int data){
    this ->data = data;
    this-> next =  NULL;
  }
};

 Node* reverse(Node* &head){

     Node *curr = head;
     Node *prev = NULL;
     Node *next;

     while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
     }
     return prev;
   }

int length(Node* &head){
      int len = 1;
      Node*temp = head;
      while(temp != NULL){
         temp = temp->next;
         len++;
      }
      return len;
   }
  
Node *traverse(Node* &head){

    Node *temp = head;
      while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
      }
      
   }
   

void InsertAthead(Node* &head , int data){
    Node* newnode = new Node(data);
    newnode->next = head;
    head = newnode;
}
void InsertAttail(Node* &tail , int data){
    Node* newnode = new Node(data);
    tail->next = newnode;
    tail = newnode;
}


bool checkpalindrome(Node *head , Node *tail){

    Node *first = head;
    Node *last = tail;

    int i=0;
    int j = length(head) - 1;

   while(i<j){
        if(first->data != last->data){
            return false;
        }
        else{
            first = first->next;
            last = last->next;
            i++;
            j--;
        }

   }
   return true;
}
int main(){
    Node *head = new Node(2);
    Node *tail = head;

     InsertAthead(head , 3);
     InsertAthead(head , 5);
     InsertAthead(head ,3 );
     InsertAthead(head , 2);
     
    tail = reverse(head);
    
    if(checkpalindrome(head , tail)){
        cout<<"Palindrome is present guys"<<endl;
    }
    else{
        cout<<"Plaindorme is not present"<<endl;
    }
    return 0;
}