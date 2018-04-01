#include<stdio.h>
#include<stdlib.h>
struct stack  {
  private:
   int *stk;
   int *top;
    int max;
    int count=-1;
    
  public:
   void extra()
   { 
    
   	printf("enter the value of number of elements ");
   	scanf("%d",&max);
   	stk=(int*)malloc(sizeof(int)*max);
   	top=stk;
   	
   }
   void push(int val)
   {
   	count++;
    if(count>max-1)
	{
		printf("\n stack overflow");
	}  	
	else
	{
		top++;
		stk[count]=val;
		
	}
	
   }
   
   void pop()
   { 
     
   	if(count==-1)
   	{ 
	   printf("\n stack underflow");
   	}
   	else
   	{
   		printf("\n the deleted element from stack is %d",stk[count]);
   		top--;
   	}
    count--;
   }
   
   void display()
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
  int main()
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
