#include<stdio.h>
int n,vis[20],a[20][20],q[20],f=0,r=-1;
void bfs(int);
void main()
{
	int i,j;
	printf("enter the number of nodes");
	scanf("%d",&n);
	printf("enter the adjacency matrix");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	vis[i]=0;
	q[i]=0;
	bfs(0);
	for(i=0;i<n;i++)
	if(vis[i])
	printf("%d->",i);
}
void bfs(int i)
{
	int j;
	for(j=0;j<n;j++)
	if(!vis[j]&&a[i][j]==1)
	q[++r]=j;
	if(f<=r)
	{
		vis[q[f]]=1;
		bfs(q[f++]);
	}
}
