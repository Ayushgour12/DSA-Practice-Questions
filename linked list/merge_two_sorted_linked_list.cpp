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
Node * mergeSorted(Node * &head , Node * &head1){
    Node *first = head;
    Node *second = head1;
    
    
    while(first != NULL){
      // cout<<first->data<< " ";
        if(first->data < second->data){
            first = first->next ;
        }
        else{
            int temp = first->data;
            first->data = second->data;
            second->data = temp;
            
           Node *ptr = second;

            
            while(second->data > second->next->data)
            {
                int temp1 = second->data;
                second->data = second->next->data;
                second->next->data = temp;

                second = second->next;
                
            }
            second = head;
        
        }
    }
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

      Node *newnode1 = new Node(12);
    Node *head1 = newnode1;
     InsertAthead(head1 , 10);
        InsertAthead(head1 , 8);
        InsertAthead(head1 , 6);
          InsertAthead(head1 , 4);
        InsertAthead(head1 , 2);
        
    
   
    
//     traverse(head);
    
//     cout<<endl;
//     traverse(head1);
 head = mergeSorted(head ,  head1);

// cout<<endl;
 traverse(head);
    return 0;
}