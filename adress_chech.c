

#include<stdio.h>
#include<malloc.h>

struct std
{
	int p;
	int q;
};

struct std details;

const int y,t=34;
static int z,s=12;
extern int c,d;

int c,d=12;

void main()
{
	int *dynamic;
	int a;
	int b,*ptr;
	const int x,m=7;
	details.q=1;
	printf("%d %d %d %d %d %d %d %d\n",&a,&b,&x,&y,&z,&c,&details.p,ptr);
	printf("%d %d %d %d %d %d",&t,&s,&d,&details,&details.q,&m);
}
