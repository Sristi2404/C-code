#include<stdio.h>
int main()
{
	int n,i,pos,element;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	int arr[n+1];
	printf("Enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the position to insert the new element (1 to %d):",n);
	scanf("%d",&pos);
	if(pos>n || pos<1)
	{
		printf("invalid position !! Please enter a position between 1 and %d.\n",n);
		return 1;
	}
	printf("Enter the element to insert:");
	scanf("%d",&element);
	for(i=n;i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos-1]=element;
	n++;
	printf("Array after insertion:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\n");
	return 0;
}
