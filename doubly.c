#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev,*next;
};
struct node *head=NULL;
void insert_at_beg(){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&newnode->data);
	if(head==NULL){
		newnode->prev=NULL;
		newnode->next=NULL;
		head=newnode;
	}
	else{
		newnode->prev=NULL;
		newnode->next=head;
		newnode->next->prev=newnode;
		head=newnode;
	}

}
void insert_at_end(){
	struct node *temp,*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&newnode->data);

	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
}
	newnode->next=NULL;
	newnode->prev=temp;
	temp->next=newnode;
}
void insert_at_pos(){
	struct node *temp,*newnode;
	int p,i;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&newnode->data);
	printf("enter position\n");
	scanf("%d",&p);
	temp=head;
	while(i<p-1){
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	newnode->prev=temp;
	temp->next=newnode;
	newnode->next->prev=newnode;
}		
void display(){
	struct node *temp;
	temp=head;
	while(temp->next!=NULL){
		printf("%d -> ",temp->data);
		temp=temp->next;
	}
	printf("%d -> ",temp->data);
	printf("null\n");
	
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp=temp->prev;
	}
	printf("null\n");
}
void del_from_beg(){
	struct node *temp;
	temp=head;
	printf("deleted %d",head->data);
	head=head->next;
	head->prev=NULL;
	free(temp);
}
void del_from_end(){
	struct node *temp,*p;
	temp=head;
	while(temp->next!=NULL){
		p=temp;
		temp=temp->next;
	}
	p->next=NULL;
	printf("deleted %d",temp->data);
	free(temp);
}
void del_from_mid(){
	struct node *temp,*nextnode;
	int i,pos;
	printf("enter position\n");
	scanf("%d",&pos);
	temp=head;
	while(i<pos-1){
		temp=temp->next;
		i++;}
	nextnode=temp->next;
	temp->next=nextnode->next;
	nextnode->next->prev=temp;
	printf("deleted %d",nextnode->data);
	free(nextnode);
}
int main(){
	int choice;
	do{
		printf("enter choice\n");
		printf("\n 1.front \n 2.middle \n 3.end \n 4.display \n 5.delete from beginning\n 6.delete from middle \n 7.delete from end \n 8.exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				insert_at_beg();
				break;
			}
			case 2:{
				insert_at_pos();
				break;
			}
			case 3:{
				insert_at_end();
				break;
			}
			case 4:{
				display();
				break;
			}
			case 5:{
				del_from_beg();
				break;
			}
			case 6:{
				del_from_mid();
				break;
			}
			case 7:{
				del_from_end();
				break;
			}
			case 8:{
				break;
			}
			default:{
				printf("enter valid choice");
				break;
			}
		}
	}while(choice!=8);
	return 0;
}

