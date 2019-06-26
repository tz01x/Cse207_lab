#include<bits/stdc++.h>
#define null NULL
using namespace std;
typedef struct node{
int data;
node *next;
}node;
node *head=null,*tail=null;
void create(){
    cout<<"enter a num"<<endl;
int num;
cin>>num;
node *curr=(node*)malloc(sizeof(node));
curr->data=num;
curr->next=null;
if(head==null){
    head=curr;
    tail=curr;
}else{
tail->next=curr;
tail=curr;
}
}
node * rev(node* curr){
if(curr->next==null||curr==null)
    return curr;
node *newnode=rev(curr->next);
curr->next->next=curr;
curr->next=null;
return newnode;

}
int dis(node *curr){
if(curr==null){
    return 0;

}
cout<<curr->data<<" ";
dis(curr->next);
}
int main(){
    cout<<"enter element number ";
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        create();
    }

    dis(head);
    cout<<endl<<"rev"<<endl;
head=rev(head);
dis(head);
}
