#include<stdio.h>
#include<string.h>
#define MAX 100
int top=-1,stack[MAX];
char *strrev(char *str){
	char *p1,*p2;
	if(!str || !*str){
		return str;
	}
	for(p1=str,p2=str+strlen(str)-1;p2>p1;++p1,--p2){
		*p1 ^= *p2;
		*p2 ^= *p1;
		*p1 ^= *p2;
	}
	return str;
}
int is_operand(char c){
	return (c>='a' && c<='z') || (c>='A' && c<='Z');
}
void push(char x){
	stack[++top]=x;
}
char pop(){
	if(top==-1){
		return -1;
	}
	else{
		return stack[top--];
	}
}
int precedence(char c){
	if(c== ')')
		return 0;
	else if(c== '+' || c== '-')
		return 1;
	else if(c== '*' || c== '/')
		return 2;
}
void convert_to_prefix(char infix[MAX],char prefix[MAX]){
	char temp,x;
	int i=0,j=0;
	strrev(infix);
	while(infix[i] != '\0'){
		temp=infix[i];
		if(is_operand(temp)){
			prefix[j++]=temp;
		}
		else if(temp==')'){
			push(temp);
		}
		else if(temp=='('){
			while((x=pop()) != ')'){
				prefix[j++]=x;
			}
		}
		else{
			while(precedence(stack[top]) >= precedence(temp)){
				prefix[j++]=pop();
			}
			push(temp);
		}
		i++;
	}
	while(top != -1)
		prefix[j++]=pop();
	prefix[j]='\0';
	strrev(prefix);
}
int main(){
	char infix[MAX],prefix[MAX];
	printf("enter the expression:");
	scanf("%s",infix);
	convert_to_prefix(infix,prefix);
	printf("%s",prefix);
	return 0;
}
