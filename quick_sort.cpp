#include<stdio.h>
int n;
int x;
int i;
int arr[100];
int partition(int arr[],int p,int r)
{
 x=arr[r];
 i=p-1;
	for(int j=p;j<r;j++)
	{
		if(arr[j]<=x)
		{
			i=i+1;
		int	temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}
	}
	
	int temp1;
		    temp1=arr[r];
			arr[r]=arr[i+1];
			arr[i+1]=temp1;
			
			return i+1;
}
void quicksort(int arr[],int p,int r)
{
	if(p<r)
	{
		int q=partition(arr,p,r);
		quicksort(arr,p,q-1);
		quicksort(arr,q+1,r);
	}
}
int main()
{
	printf("enter the number of elements in array ");
	scanf("%d",&n);
	
	printf("enter the elements ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	quicksort(arr,0,n-1);
	printf("\n after swapping");
	for(int i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
	return 0;	
}
