#include<iostream>
#include<stdlib.h>
#define null NULL
using namespace std;
class Node{
protected:
typedef struct node{
int data;
node *next;
}node;
public:
node* input(int x){
node*curr=(node*)malloc(sizeof(node));
curr->data=x;
curr->next=null;
return curr;
}
};
class Stack:public Node{
private:
    node*head;
public:
    Stack(){
    head=null;
    }
void push(int x){
node *curr=input(x);

if(head==null){
head=curr;
}else{
curr->next=head;
head=curr;
}
}
int pop(){
if(isEmpty()){

}else{
int data = head->data;
head=head->next;
return data;
}

}
int isEmpty(){
if(head==null)
    return 1;
return 0;
}

void display(){
node *temp=head;
while(temp!=null){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;

}


};
class Queue:public Node{
private:
    node *front,*rear;
public:
    Queue(){
    front=null;
    rear=null;
    }
    int isEmpty(){
    if(front==null) return 1;
    return 0;
    }
    void eq(int x){
        node *curr=input(x);
    if(isEmpty()){

        front=curr;
        rear=curr;
    }else{
    rear->next=curr;
    rear=curr;
    }
    }

    int dq(){
    if(isEmpty()){
        return 0;
    }else{
        int data=front->data;
    if(front==rear){
        front=null;
        rear=null;
    }else{
    front =front->next;
    }
    return data;
    }
    }
    void display(){
    node*temp=front;
    while(temp!=null){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
    }

};

int main(){

Stack s1;
Queue q1;
int n=5;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    s1.push(x);
}
s1.display();
while(!s1.isEmpty()){
    q1.eq(s1.pop());
}
q1.display();
}
