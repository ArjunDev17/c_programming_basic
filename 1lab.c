#include<stdio.h>
int a[50],n,key,i,j;
void linear();
void binary();
void main()
{
	int ch;
	printf("\nEnter the length of array:");
	scanf("%d",&n);
	printf("\nEnter the array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nEnter the key element:");
	scanf("%d",&key);
	while(1)
	{
		printf("\n1.Linear search \n2.Binary search\n3.Exit\n");
		printf("\n Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: linear();
				break;
			case 2: binary();
				break;
			case 3: return;
			default: printf("\n Wrong choice");
		}
	}
}
void linear()
{
	i=0;
	while(a[i]!=key)
	{
		i++;
	}
	if(i<n)
	printf("The %d element is found at the location %d:",key,i+1);
	else
	printf("The %d element is not found in the list:",key);
}
void binary()
{
	int temp,first=0,mid,last=n-1;
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nThe sorted list is:\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	mid=(first+last)/2;
	while(first<=last)
	{
		if(a[mid]<key)
		first=mid+1;
		else if(a[mid]==key)
		{
			printf("\n%d found at the location %d\n:",key,mid+1);
			break;
		}
		else
		last=mid-1;
		mid=(first+last)/2;
	}
	if(first>last)
	printf("The key element %d is not in the list\n:",key);
}