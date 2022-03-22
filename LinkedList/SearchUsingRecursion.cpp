/*
30
10 20 30 40 50 
Position is 3
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

void printlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

int SearchLL(node* head, int x)
{
    if(head==NULL)
        return -1;
    if(head->data==x)
        return 1;
    else
    {
        int res=SearchLL(head->next,x);
        if(res==-1)
            return -1;
        else
            return res+1;
    }
}

int main()
{
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);
    printlist(head);
    cout<<"Position is "<<SearchLL(head,30);
}