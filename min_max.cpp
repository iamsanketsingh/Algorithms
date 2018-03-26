//program to find min and max elements in given array using divide and conquer approach
#include<stdio.h>
int max, min;                                  // declaring global variables 
int a[100];                                   //  static declaration of array or we can do it dynamically also
void maxmin(int i, int j)                    // maxmin function and parameters are passed i,j and i,j are spacifying the position
{
 int max1, min1, mid;                       // local variables 
      if(i==j)                             // it means that htere is only one element in array 
        {
           max = min = a[i];              // so that element is max and min
        }
      else
        { 
            if(i == j-1)                  // if there are only two elements in array this condition is checked by this if statement
              {
                   if(a[i] <a[j])       
                    {
                         max = a[j];
                         min = a[i];
                    }
                     else
                   {
                         max = a[i];
                         min = a[j];
                    }
              }
            else                         // if there are more than two elements in array
              {
                         mid = (i+j)/2;          // dividing into two half
                         maxmin(i, mid);         // calling maxmin function recursively from start to mid
                         max1 = max; min1 = min; // stroing that value in the local variables
                         maxmin(mid+1, j);       //calling maxmin function recursively for mid+1 tp end
                         if(max <max1)           // comaparing the result of both functions
                            max = max1;
                         if(min > min1)
                             min = min1;
                }
        }
}
int main ()
{
       int i, num;
       
	   printf ("Enter the total number of elements in array: ");
       scanf ("%d",&num);                            // asking for the total number of elements in array
 
       printf ("Enter the elements: ");
        for (i=1;i<=num;i++)
        {
        
         scanf ("%d",&a[i]);                       // entering the numbers in array
         
        }  
         maxmin(1, num);                          // calling max min function
         printf ("Minimum element in an array : %d\n", min);   // printing the result
         printf ("Maximum element in an array : %d\n", max);
         return 0;
}
