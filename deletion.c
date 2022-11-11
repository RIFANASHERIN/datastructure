#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void push(){
	struct node *newnode;
	int value;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the value\n");
	scanf("%d",&value);
	newnode->data=value;
	newnode->next=head;
	head=newnode;       
}
void frombeg(){
	struct node *temp;
	temp=head;
	head=head->next;
	free(temp);
}
void fromend(){
	struct node *temp,*prev;
	temp=head;
	while(temp->next!=NULL){
		prev=temp;
		temp=temp->next;
	}
	prev->next=NULL;
	free(temp);
}
void frommid(){
	int i=1,pos;
	printf("enter position\n");
	scanf("%d",&pos);
	struct node *temp,*nextnode;
	temp=head;
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);
	}
void display(){
	struct node *temp;
	temp=head;
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp=temp->next;
	}
	printf("null\n");
}
int main(){
	int choice;
	do{
		printf("enter the choice\n");
		printf("\n 1.push \n 2.frombeginning \n 3.frommiddle \n 4.fromend \n 5.display \n 6.exit \n");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				push();
				break;
			}
			case 2:{
				frombeg();
				break;
			}
			case 3:{
				frommid();
				break;
			}
			case 4:{
				fromend();
				break;
			}
			case 5:{
		        display();
				break;
			}
			case 6:{
				break;
			}
			default:{
				printf("enter valid choice\n");
				break;
			}
				
		}
	}while(choice!=6);
return 0;	
}
