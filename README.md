// do while loop to add number

#include<stdio.h>

int main()
{
	double number, sum = 0;
// the body of the loop is execuated
do
{
printf("Enter a number: ");
scanf("%f", &number);
sum += number;	
}	
while(number != 0.0);
printf("sum = %if",sum);

return 0;
}

