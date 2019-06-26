#include<stdio.h>
#include<stdlib.h>
#include<string>
typedef struct student{
char name[100];
char id[100];
float cgpa;
}student;
void maxCgpa(student *stu,int n){

float maxcgpa=stu->cgpa;
int index;
for(int i=0;i<n;i++){
    if((stu+i)->cgpa > maxcgpa){
        maxcgpa=(stu+i)->cgpa;
        index=i;
    }
}
 printf("name : %s\n",((stu+index)->name));
    printf("id : %s\n",((stu+index)->id));
    printf("cgpa : %f\n",((stu+index)->cgpa));

}
void display(student *stu,int n){
for(int i=0;i<n;i++){
    printf("name : %s\n",((stu+i)->name));
    printf("id : %s\n",((stu+i)->id));
    printf("cgpa : %f\n",((stu+i)->cgpa));

}
}
int main(){
student *stu;

int n;
scanf("%d",&n);
stu=(student*)malloc(sizeof(student)*n);

for(int i=0;i<n;i++){
        printf("name : ");
    scanf("%s",&(stu+i)->name);
printf("id : ");
    scanf("%s",&(stu+i)->id);
    printf("cgpa : ");
    scanf("%f",&(stu+i)->cgpa);

}
maxCgpa(stu,n);



}
