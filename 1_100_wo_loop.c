#include<stdio.h>


int i;
void main()
{
	if(i<=100)
	{
		printf("%d ",i++);
		main();
	}
}
