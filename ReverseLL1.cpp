/*
10
20
30
40
50
10 20 30 40 50 
50 40 30 20 10
*/

#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

void printLL(node *head){
        node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
        }cout<<endl;
}

node* InsertAtEnd(node* head, int x)
{
    node* temp=new node(x);
    if(head==NULL)
        return temp;
    node* curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

node* ReverseLL(node* head)
{
    node* prev=NULL;
    node* curr=head;
    while(curr!=NULL)
    {
        node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}

int main()
{
    int n=5;
    node* head=NULL;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        head=InsertAtEnd(head,x);
    }
    printLL(head);

    head=ReverseLL(head);
    printLL(head);

}