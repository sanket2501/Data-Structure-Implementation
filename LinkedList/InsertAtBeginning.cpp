/*
10 20 30 
*/

#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *insertBegin(Node *head,int x){
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
    
}

void printlist(Node *head){
        Node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
        }
}

int main() 
{ 
	Node *head=NULL;
	head=insertBegin(head,30);
	head=insertBegin(head,20);
	head=insertBegin(head,10);
	printlist(head);
	return 0;
} 



/*
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

node* InsertAtFirst(node* head, int x)
{
    node* currhead=new node(x);
    currhead->next=head;
    return currhead;
}

int main()
{
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);
    cout<<"Before Inserting\n";
    printlist(head);
    head=InsertAtFirst(head,9);
    cout<<"After Inserting\n";
    printlist(head);
}
*/