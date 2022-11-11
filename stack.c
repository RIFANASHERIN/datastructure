#include<stdio.h>
int stack[100],top,i,n,c,x;
void push();
void pop();
void display();
void main(){
top = -1;
printf("enter the size of the array:");
scanf("%d",&n);
do{
printf("1.push \n 2.pop \n 3.display \n 4.exit\n");
scanf("%d",&c);
switch(c){
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
default:
{
printf("enter valid choice(1/2/3)");
}
}
}while(c<4);

}
void push()
{
if(top>=n-1){
printf("stack is full");}
else{
printf("enter the value to be inserted:");
scanf("%d",&x);
top++;
stack[top]=x;}
}
void pop(){
if(top<=-1){
printf("stack is empty");
}
else{
printf("deleted elements are %d ", stack[top]);
top--;
}
}
void display(){
if(top>=0){
printf("The elements in stack:");
for(i=top;i>=0;i--){
printf("%d",stack[i]);
}}       
else{
printf("the stack is empty");}
}
