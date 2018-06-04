

#include<stdio.h>

void main()
{
	int i;
	char c;
	for(i=65;i<=90;i++)
	printf("%c ",i);
	
	printf("\n");
	for(i=97;i<=122;i++)
	printf("%c ",i);
	
	printf("\n");
	for(i=48;i<=57;i++)
	printf("%c ",i);
	
	printf("\n");
	for(c='A';c<='Z';c++)
	printf("%c ",c);
	
	
	int x=9,y=15,z=16,f=12,e,d;
	e=!(x<y||y<z);
	d=(x>y)?x-y:y-x;
	printf("\n\n%d %d",e,d);
}
