#include<stdio.h>
void main(){
	int i,n1,n2,n;
	int a[10],b[10];
	printf("enter the size of the first array");
	scanf("%d",&n1);
	printf("enter the first array elements");
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
		}
	printf("enter the size of the second array");
	scanf("%d",&n2);
	printf("enter the second array elements");
	for(i=0;i<n2;i++){
		scanf("%d",&b[i]);
		}
	for(i=0;i<n2;i++){
		a[n1+i] = b[i];
	}
		
	n=n1+n2;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}	

