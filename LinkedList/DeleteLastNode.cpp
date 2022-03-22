/*
10 20 30 40 50
10 20 30 40
*/

#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(node *head){
        node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
        }
}

node* InsertAtEnd(node* head,int x)
{
    node* curr=new node(x);
    if(head==NULL) 
        return curr;
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new node(x);
    return head;
}

void DeleteLastNode(node* head)
{
    node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}

int main()
{
    node* head=NULL;
    head=InsertAtEnd(head,10);
    head=InsertAtEnd(head,20);
    head=InsertAtEnd(head,30);
    head=InsertAtEnd(head,40);
    head=InsertAtEnd(head,50);
    printlist(head);   

    cout<<"\n";
    DeleteLastNode(head);
    printlist(head);   

}