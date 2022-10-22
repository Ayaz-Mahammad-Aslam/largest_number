//write a program to find out the biggest of three numbers using nested if//
#include<stdio.h>
int main()
{
	int a,s,d,big;
	printf("Enter 3 numbers\n");
	scanf("%d%d%d",&a,&s,&d);
	big = d;
	if(a>big)
	{
		big = a;
	}
	if(s>big)
	{
		big = s;
	}
	printf("The largest number is %d",big);
	return 0;
}
