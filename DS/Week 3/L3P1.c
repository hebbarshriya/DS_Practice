#include<stdio.h>
#include<stdlib.h>
struct complex
{
int r;
int i;
};
int main()
{
	struct complex a,b,c;
	int n;
	printf("Enter the real part of first number : ");
	scanf("%d",&a.r);
	printf("Enter the imaginary part of first number : ");
	scanf("%d",&a.i);
	printf("Enter the real part of second number : ");
	scanf("%d",&b.r);
	printf("Enter the imaginary part of second number :");
	scanf("%d",&b.i);
	printf("Enter 1 to Add \n");
	printf("Enter 2 to Subtract \n");
	printf("Enter 3 to Multiply \n");
	printf("Enter 4 to Divide \n");
	scanf("%d",&n);
	if(n==1)
	{
		c.r=a.r+b.r;
		c.i=a.i+b.i;
		printf("Addition completed  ");
		printf("%d + %d i",c.r,c.i);
	}
	if(n==2)
	{
		c.r=a.r-b.r;
		c.i=a.i-b.i;
		printf("Subtraction completed  ");
		printf("%d + %d i",c.r,c.i);
	}
	if(n==3)
	{
		int x,y;
		x=(a.r*b.r)-(a.i*b.i);
		y=(a.r*b.i)+(a.i*b.r);
		printf("Multiplication completed  ");
		printf("%d + %d i",x,y);
	}
	if(n==4)
	{
		int x,y,z;
		x=(a.r*b.r)+(a.i*b.i);
		y=(a.i*b.r)-(a.r*b.i);
		z=(b.r*b.r)+(b.i*b.i);
		float w=x%z;
		float q=y%z;
		printf("Division completed  ");
		printf("%f + %f i",w,q);
	}
}