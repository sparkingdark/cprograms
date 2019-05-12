#include <stdio.h>
#define p printf
#define s scanf
int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int num1,num2;
	p("enter two numbers to swap:\n");
	s("%d %d",&num1,&num2);
	swap(&num1, &num2);	
	printf("swapped number:num1---->%d and num2--->%d",num1,num2);
	}
