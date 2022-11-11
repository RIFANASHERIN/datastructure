#include<stdio.h>
void main(){
	int n1,n2,i = 0, j = 0, k = 0;
	int a[10],b[10],c[100];
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

 
    while (i<n1 && j <n2)
    {
        c[k++] = a[i++];
        c[k++] = a[j++];
    }

    while (i < n1)
        c[k++] = a[i++];
 
    while (j < n2)
        c[k++] = b[j++];
for(i=0;i<n1+n2;i++){
		printf("%d",c[i]);
		}
}
