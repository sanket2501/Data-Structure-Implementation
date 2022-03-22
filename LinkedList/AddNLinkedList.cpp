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
}

node* InsertNode(node* head,int x)
{
    node *curr=new node(x);
    if(head==NULL)
        return curr;
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new node(x);
    return head;
}

node* InsertNodeReverseOrder(node* head,int x)
{
    node* temp=new node(x);
    temp->next=head;
    return temp;
}

int main()
{
    int n=5;
    int z;
    node* head1=NULL;
    node* head2=NULL;
    for(int i=0;i<n;i++)
    {
        cin>>z;
        //Insert at end
        head1=InsertNode(head1,z);
        //Insert at beginning
        head2=InsertNodeReverseOrder(head2,z);
    }
    printLL(head1);
    cout<<"\n";
    printLL(head2);
}