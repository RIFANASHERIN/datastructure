#include<stdio.h>
void main(){
int a[20],n,s,i;
printf("enter size of the array");
scanf("%d",&n);
printf("enter elements of the array\n");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter the element that you want to search");
scanf("%d",&s);
for(i=0;i<n;i++){
if(a[i]==s){
printf("the position of %d is %d", s,i);
}
}
}
