#include<stdio.h>
#include<conio.h>
int a,b,u,v,i,j,n,ne=1;
int mincost=0,cost[10][10],min,visited[10]={0};
int main(){
	printf("enter no of vertices:");
	scanf("%d",&n);
	printf("enter adj matrix:");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++){
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
			
		
	}
	visited[1]=1;
	printf("\n");
	while(ne<n){
		for(i=1,min=999;i<=n;i++)
			for(j=1;j<=n;j++)
				if(cost[i][j]<min)
					if(visited[i]!=0){
						min=cost[i][j];
						a=u=i;
						b=v=j;
					}
				
				if(visited[u]==0 || visited[v]==0){
					printf("\n %d edge(%d %d) cost:%d",ne++,a,b,min);
					mincost+=min;
					visited[b]=1;
				}
				cost[a][b]=cost[b][a]=999;
			
		
	}
	printf("\n\t minimum cost=%d",mincost);
	getch();
}
