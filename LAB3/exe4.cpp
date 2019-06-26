#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#define null  NULL
#include<string>
using namespace std;
typedef struct node
{
    char data;
    node *next;
} node;
node *head=null;
void push(char data)
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
        return 1;/**return stack is  empty */
    }
    else
    {
        return 0;/**return stack is not empty */
    }
}
char pop()
{
    if(is_empty())
    {


    }
    else
    {
        node *temp=head;
        head=head->next;
        return temp->data;
    }
}

char peek()
{

    if(!(is_empty()))
    {
        return head->data;
    }

}
void dis()
{
    node*temp=head;
    while(temp!=null)
    {
        printf("%c  ",temp->data);
        temp=temp->next;
    }
}

int main()
{
    string input="((a+b)/c))";
    for(int i=0; input[i]!=null; i++)
    {
        if(input[i]=='(')
        {
            push(input[i]);
        }
        else if(input[i]==')')
        {
            while(1)
            {
                if(peek()=='('&&!is_empty())
                {
                    pop();
                    break;
                }else{
                    push(input[i]);
                break;
                }
            }
        }


    }


    if(is_empty())
    {
        cout<<"no problem "<<endl;


    }
    else
    {
        if(peek()==')')
        {
            cout<<"closing  parentheses not end "<<endl;

        }
        else if(peek()=='(')
        {
            cout<<"opening parentheses not end "<<endl;

        }
    }

}
