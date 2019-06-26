#include<iostream>
using namespace std;
#define null NULL
#define Size 6
class Queue
{
private:
    int queue[Size];
    int front,rear;
public:
    Queue(){
    front=-1;
    rear=-1;
    cout<<"hello"<<endl;
    }
    int isFull()
    {
        if((front==0&&rear==Size-1)||rear + 1 == front)
            return 1;
        return 0;
    }
    int isEmpty()
    {
        if(front==-1)
            return 1;
        return 0;
    }
    void equeu(int input)
    {
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
        }
        else
        {
            if(front==-1)
                front=0;
            rear=(rear+1)%Size;
            queue[rear]=input;

        }
    }
    int deque()
    {
        if(isEmpty())
        {

        }
        else
        {
            int data=queue[front];
            if(front==rear)
            {
                front=-1;
                rear=-1;
            }
            else
            {
                front=(front+1)%Size;
            }
            return data;
        }
    }
    void dis()
    {
        int f=front;
        int r=rear;
        while(1)
        {
            cout<<"queue data is -> "<< queue[f] <<endl;
            if(f==r)break;
            f=(f+1)%Size;
        }

    }
    void copy_q(Queue q){
    while(!q.isEmpty()){
       equeu(q.deque());
    }

    }
    void removeNeg(){
        while(queue[front]<0){
            front=(front+1)%Size;
        }
        while(queue[rear]<0){
            if(rear==0&&front>0){
                rear=Size-1;
            }else{
            rear--;
            }
        }
    int f=front;
    while(f!=rear){
        if(queue[f]>=0){
            f=(f+1)%Size;
        }else{
            int f2=f;
        while(f2!=rear){
            queue[f2]=queue[(f2+1)%Size];

            f2=(f2+1)%Size;
        }
        if(rear==0&&front>0){
                rear=Size-1;
            }else{
            rear--;
            }
        }

    }
    }
};

int main()
{
Queue q1,q2;
int x;
for(int i=0;i<6;i++){
    cout<<"input data :";
    cin>>x;
    q1.equeu(x);
}
//q1.removeNeg();
q1.dis();
q2.copy_q(q1);
cout<<"q2 copy "<<endl;
q2.dis();
cout<<"q1 dis "<<endl;
q1.dis();
}


