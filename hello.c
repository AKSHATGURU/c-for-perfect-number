// perfect number

#include<stdio.h>

int main()
{
	//initialize the variable
	int num, rem, sum = 0, i; 
	// take input from user
	printf(" enter the number\n");
	scanf("%d", &num);
	//find the divisor & add them
	
	for(i = 1; i < num; i++)
                           {
                           	   rem = num % i;
                           	   if (rem == 0)
                           	        {
                           	        	 sum = sum +i;
									   }
						   }


	
if(sum==num)    
                           printf("it is perfect number");
                else
				           printf("\n it is not a perfect number");
return 0;
}


