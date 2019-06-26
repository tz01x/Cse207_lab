
#include<stdio.h>
#include<stdlib.h>
int erageNeg(int n,int *ptn){
int i=0,j;

while(i<n){
        if(*(ptn+i)>=0){
            i++;
        }else if(*(ptn+i)<0){

        for(j=i;j<n;j++){
           *(ptn+j)=*(ptn+j+1);
        }
        n--;
        }

}
for(int i=0;i<n;i++) printf("%d,",ptn[i]);

}

int main(){
int n;
int *ptn;
scanf("%d",&n);
ptn=(int *)malloc(sizeof(int)*n);
for(int i=0;i<n;i++){
    //scanf("%d",ptn[i]);
    scanf("%d",(ptn+i));
}
erageNeg(n,ptn);
//for(int i=0;i<n;i++) printf("%d,",*(ptn+i));
}
