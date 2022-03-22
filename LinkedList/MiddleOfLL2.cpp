#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void printLL(node* head)
{
    node* curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

int printMiddle(node* head)
{
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}

int main()
{
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);
    head->next->next->next->next->next=new node(60);
    printLL(head);
    cout<<"Middle of Linked List is "<<printMiddle(head);
}