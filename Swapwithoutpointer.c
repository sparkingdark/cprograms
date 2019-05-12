#include <stdio.h>
#define p printf
#define s scanf
int main()
{
	int num1,num2;
	p("enter two numbers to swap:\n");
	s("%d %d",&num1,&num2);
	
	
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;

	printf("swapped number:num1---->%d and num2--->%d",num1,num2);
	}
