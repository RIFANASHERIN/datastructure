#include<stdio.h>
#define max 50
int q[max],i,c,n,x,p;
int	rear=-1;
int front=-1;
void push();
void pop();
void display();
void main(){
	printf("enter size of the array\n");
	scanf("%d",&n);
	do{
		printf("\n 1.push \n 2.pop \n 3.display \n 4.exit \n");
		scanf("%d",&c);
		switch(c){
			case 1:{
				push();
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				break;
			}
			default:{
				printf("enter valid choice(1/2/3)");
				break;
			}
		}
	}while(c!=4);
}
void push(){
	printf("enter the value to be inserted:\n");
	scanf("%d",&x);
	if(rear>=max-1){
		printf("queue overflow\n");
		return;
	}
	else if(front==-1 && rear==-1){
		front=rear=0;
		q[rear]=x;
		}
	else{
		rear=rear+1;
		q[rear]=x;
	}
	printf("value inserted");
	
}
void pop(){
	if(front==rear==-1){
		printf("queue underflow");
	}
	else if(front==rear){
		front=rear=-1;
	}
	else{
		p=q[front];
		printf("deleted element is: %d",p);
		front=front+1;
	}
}
void display(){
	if(front==-1 && rear==-1){
		printf("queue is empty");
	}
	else{
		printf("queue is : ");
		for(i=front;i<rear+1;i++){
			printf("%d\t",q[i]);
		}
	}
}


