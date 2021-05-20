#include<stdio.h>
void qsort(int [],int,int);
void main()
{
	int n,a[20],i;
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the elements into array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	qsort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void qsort(int a[],int f,int l)
{
	int i,j,t,piv;
	if(f<l)
	{
		i=f;
		piv=f;
		j=l;
	while(i<j)
	{
		while(a[i]<=a[piv]&&i<l)
		i++;
		while(a[j]>a[piv])
		j--;
		if(i<j)
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	t=a[piv];
	a[piv]=a[j];
	a[j]=t;
	qsort(a,f,j-1);
	qsort(a,j+1,l);
}
}
