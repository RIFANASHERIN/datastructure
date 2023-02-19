#include<stdio.h>
#include<stdlib.h>
int n,i,j,a,b,u,v,ne=1;
int min,mincost=0,cost[9][9],parent[9];
int find(int i){
	while(parent[i])
		i=parent[i];
	return i;
}
int uni(int i,int j){
	if(i!=j){
		parent[j]=i;
		return 1;
	}
	return 0;
}
int main(){
	printf("enter number of vertices:");
	scanf("%d",&n);
	printf("enter adjacency matrix:\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
			cost[i][j]=999;
			
		}
	}
	printf("adjacency matrix:\n");
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d\t",cost[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("the edges of minimum cost spanning tree are\n");
		while(ne<n){
			for(i=1,min=999;i<=n;i++){
			for(j=1;j<=n;j++){
				if(cost[i][j]<min){
					min=cost[i][j];
					a=u=i;
					b=v=j;
					
			}
		}
	}
	u=find(u);
	v=find(v);
	if(uni(u,v)){
		printf("%d edge(%d,%d)=%d\n",ne++,a,b,min);
		mincost+=min;
	}
	cost[a][b]=cost[b][a]=999;
	}
	printf("\n\tminimum cost=%d\n",mincost);
}

