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

void DisplayLL(node* head)
{
    node* curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

node* SortedInsert(node* head,int x)
{
    node* temp=new node(x);
    if(head==NULL)
        return temp;
    if(x<head->data)
    {
        temp->next=head;
        return temp;
    }
    node* curr=head;
    while(curr->next!=NULL && curr->next->data<x)
    {
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}

int main()
{
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);
    DisplayLL(head);

    cout<<"\n";
    int x=25;
    head=SortedInsert(head,x);
    DisplayLL(head);
}

/*
O/P
10 20 30 40 50 
10 20 25 30 40 50
*/