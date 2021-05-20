#include<stdio.h>
void dfs(int);
int n,a[10][10],visit[10];
void main()
{
	int i,j;
	printf("enter the number of nodes\n");
	scanf("%d",&n);
	printf("enter the adjacency matrix");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	visit[i]=0;
	dfs(0);
}
void dfs(int i)
{
	int j;
	printf("%d->",i);
	visit[i]=1;
	for(j=0;j<n;j++)
	if(!visit[j]&&a[i][j]==1)
	dfs(j);
}
