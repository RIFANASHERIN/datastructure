#include<stdio.h>
void main(){
	int A[10],B[10],i,n,M[20],n1;
	int a=0,b=0;
	printf("enter the size of both array\n");
	scanf("%d",&n);
	printf("enter array elements of first array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	printf("first array element\n");
	for(i=0;i<n;i++){
	printf("%d\t",A[i]);
	}
	printf("\nenter array elements of second array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&B[i]);
	}
	printf("second array element\n");
	for(i=0;i<n;i++){
	printf("%d\t",B[i]);
	}
	n1=n+n;
	for(i=0;i<n1;i++){
		if(i%2==0){
			M[i]=A[a];
			a++;	
		}
		else{
			M[i]=B[b];
			b++	;
		}
	}
	printf("\nafter alternate merging:\n");
	for(i=0;i<n1;i++){
		printf("%d\t",M[i]);
	}
}
