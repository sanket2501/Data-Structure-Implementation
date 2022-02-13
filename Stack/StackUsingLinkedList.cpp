#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int a){
        data=a;
        next=NULL;
    }
};

struct mystack{
    node *head;
    int size;
    mystack(){
        head=NULL;
        size=0;
    }
    void push(int x){
        node *temp=new node(x);
        temp->next=head;
        head=temp;
        size++;
    }
    int pop(){
        if(head==NULL)
            cout<<"Stack is underflow";
        else{
            int res=head->data;
            node *temp=head;
            head=head->next;
            delete(temp);
            return res;

        }
    }
    void display(){
        node *curr=head;
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
        cout<<endl;
    }

};
int main(){
    mystack *s=new mystack();
    s->push(10);
    s->push(20);
    s->push(30);
    s->push(40);
    cout<<s->pop()<<"\n";
    s->display();
}
