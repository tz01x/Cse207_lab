#include<iostream>
#include<stdlib.h>
#define null NULL
using namespace std;
class Queue{
private:

typedef struct node{
    int data;
    node *next;

}node;
node *front=null,*rear=null;
public:

node* input(){
int n;
cin>>n;
node *curr=(node*)malloc(sizeof(node));
curr->data=n;
curr->next=null;
return curr;
}
int isEmpty(){
if(front==null){
    return 1;
}else{
    return 0;
}
}
void Equeue(node *curr){

    if(front==null){
        front=curr;
        rear=curr;
    }else{
    rear->next=curr;
    rear=curr;
    }

}
void Deque(){
if(isEmpty()){

}else{
node *temp=front;
front=front->next;
cout<<temp->data<<endl;
free(temp);
}
}
void display(){
node *temp=front;
while(temp!=null){
    cout<<temp->data<<"  ";
    temp=temp->next;
}cout<<endl;

}


};


int main(){
    Queue q1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    q1.Equeue(q1.input());
    }
    q1.display();
}
