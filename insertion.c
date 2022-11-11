#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL,*newnode;
void front(){
	int value;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the value\n");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=head;
	head=newnode;
}
void end(){
	int value;
	struct node *temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the value\n");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=NULL;
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newnode;	
}
void middle(){
	int value,position,i=1;
	struct node *temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the position\n");
	scanf("%d",&position);
	printf("enter the data\n");
	scanf("%d",&value);
	newnode->data=value;
    if(head==NULL){
		printf("link is empty");
	}
	else{
		temp=head;
		while(i<position-1){
			temp=temp->next;
			i++;
		}
		newnode->next=temp->next;
		temp->next=newnode;
	}
	
}
void display(){
	struct node *temp;
	temp=head;
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp=temp->next;
	}
	printf("null");
}
int main(){
	int choice;
	do{
		printf("enter choice\n");
		printf("\n 1.front \n 2.middle \n 3.end \n 4.display \n 5.exit \n");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				front();
				break;
			}
			case 2:{
				middle();
				break;
			}
			case 3:{
				end();
				break;
			}
			case 4:{
				display();
				break;
			}
			case 5:{
				break;
			}
			default:{
				printf("enter valid choice");
				break;
			}
		}
	}while(choice!=5);
	return 0;
}
