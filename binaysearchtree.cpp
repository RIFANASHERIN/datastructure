#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *right,*left;
};
typedef struct node node;
int count=0;
void insert(node **tree,int val){
	node *newnode;
	newnode=NULL;
	if(!(*tree)){
		newnode=(node*)malloc(sizeof(node));
		newnode->data=val;
		newnode->left=newnode->right=NULL;
		*tree=newnode;
		return;
	}
	else{
		if(val > (*tree)->data){
			insert(&(*tree)->right,val);
		}
		else if(val < (*tree)->data){
			insert(&(*tree)->left,val);
		}
	}
}
search(node **tree,int val){
	if(!(*tree)){
		printf("empty");
	}
	else{
		if(val < (*tree)->data){
			search(&(*tree)->left,val);
			count++;
		}
		else if(val >(*tree)->data){
			search(&(*tree)->right,val);
			count++;
		}
	}
}
void inorder(node *tree){
	if(tree){
		inorder(tree->left);
		printf("%d ",tree->data);
		inorder(tree->right);
	}
}
void postorder(node *tree){
	if(tree){
		postorder(tree->left);
		postorder(tree->right);
		printf("%d ",tree->data);
	}
}
void preorder(node *tree){
	if(tree){
		printf("%d ",tree->data);
		preorder(tree->left);
		preorder(tree->right);
	}
}
node *minvalue(node *min,int val){
	node *current=min;
	if(current && current->left!=NULL){
		current=current->left;
	}
	return current;
}
void delete1(node **tree,int val){
	node *temp,*succ;
	if(!(*tree)){
		printf("empty");
	}
	else{
		if(val>(*tree)->data){
			delete1(&(*tree)->right,val);
		}
		else if(val<(*tree)->data){
			delete1(&(*tree)->left,val);
		}
		else{
			if((*tree)->left==NULL && (*tree)->right==NULL){
				temp=*tree;
				*tree=NULL;
				printf("%d deleted",temp->data);
			}
			else if((*tree)->right==NULL){
				temp=*tree;
				*tree=(*tree)->left;
				printf("%d deleted",temp->data);
			}
			else if((*tree)->left==NULL){
				temp=*tree;
				*tree=(*tree)->right;
				printf("%d deleted",temp->data);
			}
			else{
				succ=minvalue((*tree)->right,val);
				temp=*tree;
				*tree=succ;
				printf("%d deleted by its successor %d",temp->data,succ->data);
			}
		}	
		
		}
}
int main(){
	struct node *root=NULL;
	int temp,i,s,d,ch;
	do{
	printf("\n 1.insertion \n 2.search \n 3.deletion \n 4.inorder \n 5.preorder \n 6.postorder \n 7.exit \n ");
	printf("enter choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("enter element:");
			scanf("%d",&i);
			insert(&root,i);
			break;
		case 2:
			printf("element:");
			scanf("%d",&s);
			temp=search(&root,s);
			if(temp){
				printf("found at %d",count);
			}
			else{
				printf("not");
				
			}
			break;
		case 3:
			printf("element:");
			scanf("%d",&d);
			delete1(&root,d);
			break;
		case 4:
			inorder(root);
			break;
		case 5:
			preorder(root);
			break;
		case 6:
			postorder(root);
			break;
		case 7:
			break;
		default:
			printf("enter valid choice");
			
		
	}
}while(ch!=7);
}

