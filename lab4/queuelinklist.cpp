#include<iostream>
#include<stdlib.h>
using namespace std;
#define null NULL
#define Size 6
class Queue{
private:
typedef struct node{
int data;
node *next;
}node;
int maxSize=6;
int currSize=0;
node *front=null,*rear=null;
public:
    int isFull(){
        if(currSize==maxSize)
            return 1;
        return 0;
    }
    int isEmpty(){
        if(currSize==0||front==null){
            return 1;
        }return 0;
    }
    node* input(int x){
    node *curr=(node*)malloc(sizeof(node));
    curr->data=x;
    curr->next=null;
    return curr;
    }
    void equeue(node *curr){
    if(isFull()){
    cout<<"queue is full"<<endl;
    }else{

    if(front==null){
        front=curr;
        rear=curr;

    }else{
    rear->next=curr;
    rear=curr;
    }
    currSize++;

    }
    }
    int deque(){
    if(isEmpty()){
        cout<<"q is empty"<<endl;

    }else{
        currSize--;
        int data=front->data;
        if(front==rear){
            front=null;
            rear=null;
            currSize=0;

        }else{
        node*temp=front;
        front=front->next;
        free(temp);


        }
        return data;

    }
    }

    void display(){
    node *temp=front;
    while(temp!=null){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl<<endl;
    }
    void copy_q(Queue q){
    while(!q.isEmpty()){
        equeue(input(q.deque()));
    }
    }
    void removeNeg(){
    while(front->data<0){
        front=front->next;
    }
    node *temp=front,*temp1;
    while(temp!=null){
            if(temp->data>=0){
        temp1=temp;
        temp=temp->next;
            }else
            {
                temp1->next=temp->next;
                temp=temp->next;

            }

    }
    }

};
int main(){
    string a="adfi";
    char ad[100]="adddfi";
    if(a!=ad){
            a=ad;
        cout<<"yes";
    }
    Queue q1,q2;
    for(int i=0;i<6;i++){
    int x;
    cin>>x;
    q1.equeue(q1.input(x));

    }

    q1.display();
    q1.removeNeg();
    q2.copy_q(q1);
    cout<<"q2 copy"<<endl;
    q2.display();
}
