// insertion of elements into linked list according to their priority
#include<stdio.h>
#include<stdlib.h>
struct node                                            // structure type of node that contains integer type data variable,priority and pointer type variable next
{
	int data;
	int priority;
	struct node *next;
}*t,*q,*start,*temp;

void insert()                                       // insert function that is used to enter data according to priority
{
	int value,value1;                             // integer type of variable that is used in storing data value and priority
	printf("\nplease enter the data: ");
	scanf("%d",&value);
	printf("\nplease enter the priority: ");
	scanf("%d",&value1);
     t=(struct node*)malloc(sizeof(struct node)); // memory is allocated
     t->data=value;                           // value is assigned to t's data part
     t->priority=value1;                     // value1 is assigned to t's priority part
     
     if(start==NULL)                        // first condition-if linked list is empty then element is added in beginning and the new node becomes start
     {
     	t->next=start;                     
     	start=t;
     }
     else                                 // if one or more node are there
     { 
     	q=start;                         // q become start
     	if(t->priority < q->priority)   // if higher priority comes then it will be added to first (low integer value means higher priority process)
     	{
     		t->next=q;      
     		start=t;                   // the new node becomes start
     	}
     	else
     	{                              
     		int flag=0;                // integer type of variable flag intialized with zero 
     		while(q->next!=NULL)       // used for traversing it will run until the last node
     		{
     			if(q->next->priority > t->priority && q->priority <= t->priority) // case when priority of nodes are like this 1->2->3->5 and new node with priority 4 comes in
     			{
     		    	temp=q->next;          // storing the value of q's next part in temp
     				q->next=t;             // now t is assigned to q's next part of q's next part will store the value of t
     				t->next=temp;          // temp is assigned to t's next node
     				flag=1;                // flag=1
     			}
     			q=q->next;		
          	}
			  if(flag==0)	              // flag=0 it means that the priority of process is lowest and it means that the element is added to the last of linked list
			  {
			  	  q->next=t;
     		  t->next=NULL;
			  }
     		
     	}
     }
}

void display()                        // display fuction for linked list
{ 
q=start;
	while (q!=NULL)
	{
		printf("\n%d",q->data);
		q=q->next;
	}
}

int main()
{
	
	int choice;                // menu driven program 
	do                        // do while loop will run until while is not equal to -1
	{
		printf("\n enter your choice:-\n 1.press 1 to enter node in linked list \n 2.press 2 for display \n 3.press -1 for exit ");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:insert();
		break;
		
		case 2:display();
		break;
		
		default:printf("you have entered the wrong choice");
		break;
		}
		
	}while(choice!=-1);
	return 0;
}
