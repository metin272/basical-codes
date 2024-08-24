#include <stdio.h>
#include <stdlib.h>

/* Pointer Takas*/
void takas(int *, int *);
int main() {
int a=10;
int b=20;
printf("%d\t%d\n",b,a);
takas(&a,&b);
printf("%d\t%d",b,a);

}
void takas(int *p, int *d)
{
	int x;
	
	x=*p;
	*p=*d;
	*d=x;
	 
}
