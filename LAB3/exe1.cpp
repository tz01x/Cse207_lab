#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <exception>
#define null  NULL
using namespace std;
typedef struct node
{
    char data;
    node *next;
} node;
node *head=null;
void push(int data)
{
    node *curr=(node *)malloc(sizeof(node));
    curr->data=data;
    curr->next=null;
    if(head==null)
    {
        head=curr;
    }
    else
    {
        curr->next=head;
        head=curr;
    }

}
int is_empty()
{
    if(head==null)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void dis()
{
    /**

    display stack

    */
    node*temp=head;
    while(temp!=null)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    cout<<"\n\n"<<endl;
}
int pop()
{
    if(is_empty())
    {
        node *temp=head;
        head=head->next;
        return temp->data;

    }
    else
    {
        return 0;
    }
}
int menu()
{
    cout<<"inseart data /pop "<<endl;
    cout<<"print starck "<<endl;
    cout<<"pop stack \n"<<endl;
    int x;
    cin>>x;
    if(x==1)
    {
        int data;
        cout<<"enter data ";
        cin>>data;
        push(data);
    }
    if(x==2)
    {
        dis();
    }
    if(x==3)
    {
        pop();
    }
    if(x==0)
    {
        return 0;
    }

}

void binarynumber(int x)
{

    while(x>0)
    {
        if(x%2==0)
        {
            push(0);

        }
        else
        {
            push(1);

        }
        x=x/2;

    }

}

int main()
{
    int x;
    while(1)
    {

        cout<<"enter a number : ";
        cin>>x;
        binarynumber(x);
        dis();
        head=null;

    }
}
