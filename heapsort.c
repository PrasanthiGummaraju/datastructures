#include<stdio.h>
void maxheap(int [],int);
void heapsort(int [],int);
void main()
{
	int n,i,a[50];
	printf("enter no.of elements");
	scanf("%d",&n);
	printf("enter numbers into the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	heapsort(a,n);
	printf("the elements after sorting are");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void maxheap(int a[],int n)
{
	int t,i,j;
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i;
		while(a[j/2]<t&&j>0)
		{
			a[j]=a[j/2];
			j=j/2;
		}
		a[j]=t;
	}
}
void heapsort(int a[],int n)
{
	int t;
	while(n>1)
	{
		maxheap(a,n);
		t=a[0];
		a[0]=a[n-1];
		a[n-1]=t;
		n=n-1;
	}
}
