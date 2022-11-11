#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *front=NULL,*rear=NULL;
void push(){
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter data\n");
scanf("%d",&newnode->data);
if(front==NULL && rear==NULL){
front=rear=newnode;
rear->next=front;
}
else{
rear->next=newnode;
newnode->next=front;
}

