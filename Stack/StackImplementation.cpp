#include<iostream>
using namespace std;
struct mystack
{
    int *arr;
    int cap;
    int top;
    mystack(int c){
        cap=c;
        arr=new int[cap];
        top=-1;
    }
    int push(int x){
        if(top==cap-1){
            cout<<"stack is overflow";
        }
        else{
            top++;
            arr[top]=x;
        }
    }
    int pop(){
        if(top<0){
            cout<<"stack is underflow"<<"\n";
        }
        else{
            int res=arr[top];
            top--;
            return res;
        }
    }
    int peek(){
        if(top<0){
            cout<<"stack is empty";
        }
        else{
            return arr[top];
        }
    }
    bool isempty(){
        return (top==-1);
    }
    void display(){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){
    mystack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // s.push(60);
    s.display();
    
    s.pop();
    s.pop();
    s.pop();
    
    s.display();
    cout<<s.peek()<<"\n";
    cout<<s.isempty()<<"\n";
}
