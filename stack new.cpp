// creating an stack using dynamic array
#include<stdio.h>
#include<stdlib.h>
struct stack  {
  private:              // declared two integer type pointers and two integers named as max and count
   int *stk;
   int *top;
    int max;
    int count=-1;
    
  public:
   void extra()
   { 
    
   	printf("enter the value of number of elements ");
   	scanf("%d",&max);
   	stk=(int*)malloc(sizeof(int)*max);       // creating the dynamic array, followed by push and pop operations 
   	top=stk;
   	
   }
   void push(int val)                        // push operation to insert the new value in stack
   {
   	count++;                                 // we are incrementing the count variable at the start of this method because we started with -1 
    if(count>max-1)                          // first of all we will go for the condition of overflow
	{
		printf("\n stack overflow");        
	}  	
	else
	{
		top++;                               
		stk[count]=val;                        // incrementing the value of top and pushing new values in stack
		
	}
	
   }
   
   void pop()                                 // pop operation to delete the new value from stack
   { 
     
   	if(count==-1)
   	{ 
	   printf("\n stack underflow");         // first of all we will go for the condition of underflow
   	}
   	else
   	{
   		printf("\n the deleted element from stack is %d",stk[count]);       //   decrementing the value of top and poping the  new values out of stack
   		top--;
   	}
    count--;
   }
   
   void display()                            // normal display function used to display the stack
   {
   	if(count==-1)
   	{
   		printf("\nthe stack is empty");
   	}
   	else
   	{
   		for(int i=count;i>=0;i--)
   		printf("\n the element is %d",stk[i]);
   	}
   }
   
    }s1,s2;
  int main()                       // main fuctions where we are calling these methods
  {  
    s1.extra();
  	s1.push(12);
  	s1.push(13);
  	s1.push(14);
  	s1.push(15);
    s1.pop();
    s1.pop();
    s1.pop();
     s1.pop();
      s1.pop();
  	s1.display();
  	return 0;
  }
