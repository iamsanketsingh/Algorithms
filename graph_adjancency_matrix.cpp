//program for display of graph using adjancency matrix
#include<stdio.h>
int main()
{ 
	int n;                                // variable that is used for stroing total number of node in graph
	
	printf("Enter total number of nodes in matrix ");                
	scanf("%d",&n);
	
	int arr[n][n];                       // declaration of double array
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int t;                                                           // variable declaration for storing weight value
			printf("if there is a node between %d and %d Enter weight else 0-",i,j);     //inserting weight depending upon user 
			scanf("%d",&t);
			
			if(t==0)
			{
			arr[i][j]=0;                        // storing value in array
			}
			else
			{
				arr[i][j]=t;                  // storing value in array
			}
		}
	}
	
	printf("\n GRAPH IN FORM OF MATRIX \n");                // finally printing
		for(int i=0;i<n;i++)
	{

		for(int j=0;j<n;j++)
		{
		printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	
}
