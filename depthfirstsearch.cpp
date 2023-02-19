#include<stdio.h>
int g[20][20],visited[20],n;
void dfs(int i){
	int j;
	printf("\n%d",i);
	visited[i]=1;
	for(j=0;j<n;j++){
		if(!visited[j] && g[i][j]==1){
			dfs(j);
		}
	}
}
int main(){
	int i,j;
	printf("enter number of vertices:");
	scanf("%d",&n);
	printf("enter adjacency matrix of graph:");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&g[i][j]);
	for(i=0;i<n;i++)
		visited[i]=0;
	dfs(0);
}

