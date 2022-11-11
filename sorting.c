#include<stdio.h>
void main(){
	int i,j,n,t;
	int a[10];
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
				}
			}
		}
	printf("array elements are: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
		}
}
