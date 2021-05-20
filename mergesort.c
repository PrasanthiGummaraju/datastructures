#include<stdio.h>
int a[20];
void mergesort(int ,int);
void merge(int,int,int,int);
void main()
{
	int n,i;
	printf("enter the no.of elements");
	scanf("%d",&n);
	printf("enter the elements into the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(0,n-1);
	printf("the elements after sorting are");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
void mergesort(int i,int j)
{
	int mid;
	if(i<j)
	{
		mid=(i+j)/2;
		mergesort(i,mid);
		mergesort(mid+1,j);
		merge(i,mid,mid+1,j);
	}
}
void merge(int i1,int j1,int i2,int j2)
{
	int t[20],i,j,k;
	i=i1;
	j=i2;
	k=0;
	while(i<=j1&&j<=j2)
	{
		if(a[i]<a[j])
		t[k++]=a[i++];
		else
		t[k++]=a[j++];
	}
	while(i<=j1)
	t[k++]=a[i++];
	while(j<=j2)
	t[k++]=a[j++];
	for(i=i1,j=0;i<=j2;i++,j++)
	a[i]=t[j];
}
