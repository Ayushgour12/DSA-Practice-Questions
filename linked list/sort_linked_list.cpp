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
Node *findmid(Node *head){
    Node *fast = head->next;
    Node *slow = head;

    while(fast != NULL && fast->next != NULL){
        fast  = fast ->next->next;
        slow = slow->next;
    }
    return slow;
}
Node * mergeSortedList(Node * head , Node * head1){
    Node *ans = new Node(-1);
    Node *temp = ans;
    if(head == NULL){
        return head1;
    }
    if(head1 == NULL){
        return head;
    }

    while(head != NULL && head1 != NULL){
        if(head->data < head1->data){
            temp->next = head;
            temp = head;
            head = head->next;
           
        }
        else{
            temp->next = head1;
            temp = head1;
            head1 = head1->next;
        }      
    }

    while(head != NULL){
        temp->next = head;
        temp = head;
            head = head->next;
    }
    while(head1 != NULL){
        temp->next = head1;
        temp  = head1;
            head1 = head1->next;

    }
    ans = ans->next;
    return ans;
    
}

Node *mergeSort(Node * &head){
     if(head == NULL ||  head->next == NULL){
        return head;
     }
     // dividing into 2 parts
    Node *mid = findmid(head);
    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;
    
    // recursively calling the linked list;

    left = mergeSort(left);
    right = mergeSort(right);

    //merging two sorted array;

   Node * ans = mergeSortedList(left , right);
   return ans;

}

int main(){
    Node *newnode = new Node(4);
    Node *head = newnode;
  
        InsertAthead(head , 6);
        InsertAthead(head , 18);
        InsertAthead(head , 7);
          InsertAthead(head , 2);
        InsertAthead(head , 3);
        InsertAthead(head , 1);

    
    
   
    
head = mergeSort(head);
 traverse(head);
    return 0;
}