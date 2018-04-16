#include<stdio.h>

int main()
{
	int ma[100],process_memory[100];
int p,n;
	printf("\n     First Fit     \n");
printf("\nEnter the number of memory blocks:- ");
scanf("%d",&n);
  printf("Enter the allocated memory ");
for(int i=0;i<n;i++)
{
	scanf("%d",&ma[i]);
}


  printf("Enter the number of processes:- ");
 scanf("%d",&p);
 
 printf("Enter the memory allocated for processes ");
 for(int i=0;i<p;i++)
{
	scanf("%d",&process_memory[i]);
}
	int internal_fragmentation;
	
	printf("\n first fit");
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ma[j]>process_memory[i])
			{
				    ma[j]=ma[j]-process_memory[i];
				    internal_fragmentation +=ma[j];
			     printf("\nfor process %d memory is allocated and the allocate memory is- %d ",i+1,process_memory[i]);
			    
			  break;
			}
			
		}
	}
	 printf("\n Internal Fragmentation- %d", internal_fragmentation );	
	 return 0;
}
