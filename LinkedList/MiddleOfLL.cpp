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
    
    node* curr=head;
    int count=0;
    while(curr!=NULL)
    {   
        count++;
        curr=curr->next;
    }
    curr=head;
    for(int i=0;i<count/2;i++)
    {
        curr=curr->next;
    }    
    return curr->data;
}

int main()
{
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);
    printLL(head);
    cout<<"Middle of Linked List is "<<printMiddle(head);
}