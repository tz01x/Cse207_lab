#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node *next;
}node;

node *head=NULL,*tail;

node * input(){ /// input data
node *curr;
curr=(node*)malloc(sizeof(node));
printf("enter an integer number : ");
scanf("%d",&curr->data);
curr->next=NULL;
}
void creat_link_list(){  /// create link list

    node *curr;
    int n,i=0;
    printf(" How many item ?   ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        curr=input(); /// input return node*

    if(head==NULL){
       head= curr;
       tail=curr;
    }else{
    tail->next=curr;
    tail=curr;
    }
    }


}
void display(){///display
node *temp=head;
system("cls");
printf("\n\n\n \t displaying  .. \n\n");
while(temp!=NULL){
    printf("%d , ",temp->data);
    temp=temp->next;
}
printf("\n\n\n");

}
void insert_at_begining(){
    printf("insert_at_begining  \n  ");
node *curr=input();
node *temp=head;
if(head==NULL){
       head= curr;

    }else{
    head=curr;

    head->next=temp;
    }
    }

void insert_at_end(){
    printf("\t\t insert_at_end \n");
node *curr=input();
node *temp=head;
if(head==NULL){
       head= curr;

    }else{
    while(temp->next!=NULL){

    temp=temp->next;
        }
    temp->next=curr;

    }
}
void insert_at_any_position(){
 printf("\t\t insert_at_any_position \n \n ");
node *curr=input();
node *temp=head,*temp1;
int n,i;
printf("  location : ");
    scanf("%d",&n);
    if(head==NULL){
       head= curr;

    }else{

    for(i=1;i<n;i++){
    temp1=temp;
    temp=temp->next;
    }
    temp1->next=curr;
    curr->next=temp;


    }




}

void delete_beg(){
printf("\t\t Deleting at first position  \n \n ");

node *temp=head;

head=head->next;

free(temp);

}
void delete_end(){
printf("\t\t Deleting at End position  \n \n ");


node *temp=head,*temp1;

while(temp->next!=NULL){
    temp1=temp;
    temp=temp->next;
        }
    temp1->next=NULL;
    printf(" deleting at End   \n \n ");
    free(temp);

    }
void delete_any_position(){
    display();
printf("\t\t Deleting at any_position   \n \n ");

int n;
node *temp=head,*temp1;


    printf(" position location : ");
    scanf("%d",&n);

int i;
    for(i=1;i<n;i++){
    temp1=temp;
    temp=temp->next;
    }
    temp1->next=temp->next;
    free(temp);




    }

void search(){
int n;
printf(" Enter key  value  : ");
 scanf("%d",&n);
 node *temp=head;
while(temp!=NULL ){
        if (temp->data == n){
           printf(" found  :  %d  \n ",temp->data );
           break;

        }
    temp=temp->next;

}

}

void duplicate(){
int c=0;
node *dup=head,*temp,*temp1;
while(dup!=NULL){
        temp=dup;
        temp1=temp;
        temp=temp->next;
    while(temp!=NULL){

        if(dup->data != temp->data){

        temp1=temp;
        temp=temp->next;

        }else{
            printf(" deleting  duplicate %d \n",++c);
             temp1->next=temp->next;
             temp=temp->next;
        }

    }
    dup=dup->next;
}

}


int menu(){
printf("\n\n1. create list \n");

printf("2. display list \n");
printf("3. insert at beginning  list \n");

printf("4. insert at end \n");
printf("5. insert at any position \n");
printf("6. Deleting at first position \n");
printf("7. Deleting at End position \n");
printf("8. Delete any position \n");

printf("9. search \n");
printf("10. erase Duplicate \n");
printf("0. exit  \n");
int n;
scanf("%d",&n);
if(n==1){
creat_link_list();
}if(n==2){
display();
}
if(n==3){
insert_at_begining();
}if(n==4){
insert_at_end();
}
if(n==5){
insert_at_any_position();
}
if(n==6){
delete_beg();
}
if(n==7){
delete_end();
}
if(n==8){
delete_any_position();
}
if(n==9){
search();
}
if(n==10){
duplicate();
}

 if(n==0){
return 0;
}
}



int main(){


try{
while( menu() ) ;
}catch(expt){

}




}
