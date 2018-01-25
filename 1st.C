#include<stdio.h>
void main()
{
	int x;
	printf("ENter number:");
	scanf("%d",&x);
	if(x>0)
	{
		printf("positive no");
	}
	else if(x<0)
	{
		printf("negative number");
	}
	else
	{
		printf("Zero");
	}
