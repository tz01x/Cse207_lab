#include<iostream>
#include<stdio.h>
using namespace std;
void display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d , ",arr[i]) ;
    }
}
void inc_sort(int *arr,int n){
for(int i=1;i<n;i++){
    int j=i-1;
    int key=arr[i];
    while(j>=0&&arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}

}
int main(){

int arr[]={5,1,2,6,3};

inc_sort(arr,5);
display(arr,5);
}
