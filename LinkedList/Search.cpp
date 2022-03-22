/*
50
10 20 30 40 50 
Position is 5
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

int SearchLL(node* head, int x)
{
    int pos=1;
    node* curr=head;
    while(curr!=NULL)
    {
        if(curr->data==x){
            return pos;
        }
        else
        {
            curr=curr->next;
            pos++;
        }

    }
    return -1;
}

void printlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

int main()
{
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);
    printlist(head);
    cout<<"Position is "<<SearchLL(head,50);
}