#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtBegin(node* &head,int data){
    node* n=new node(data);
    n->next=head;
    head=n;

}
void insertAtTail(node* &head,int data){
    node * n=new node(data);
    if(head==NULL){
        head=n;
        return;
    }
    node* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
   p->next=n;
}
void display(node * head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}
int main(){
      node* head=NULL;
      insertAtTail(head,1);
      insertAtTail(head,2);
      insertAtTail(head,3);
      insertAtTail(head,4);

      display(head);

}
