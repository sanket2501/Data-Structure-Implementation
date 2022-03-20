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
node DisplayLL(node* head)
{
    if(head==NULL)
        return 0;
    cout<<head->data<<" ";
    DisplayLL(head->next);
}
int main()
{
    node* head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);

    DisplayLL(head);
}