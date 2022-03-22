/*
10 20 30 30 50 
10 20 30 50
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

void DeleteDuplicate(node* head)
{
    node* curr=head;
    while(curr!=NULL && curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            node* temp=curr->next;
            curr->next=curr->next->next;
            delete(temp);
        }
        else
            curr=curr->next;
    }
}

int main()
{
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(30);
    head->next->next->next->next=new node(50);
    printLL(head);

    DeleteDuplicate(head);
    printLL(head);
}