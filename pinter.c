#include <stdio.h>
#include <stdlib.h>

/* Pointer-2 */
//bir de�i�ken tan�mla ve de�i�kenin adresini bir pointer a ata
//sonra bu de�i�keni ekrana yazd�r
//de�ikenin adresini yazd�r hem pointer de�i�keni ile hem de de�i�kenin ismi ile 
// sonra pointer de�erinin adresini yazd�r
// sonra pinterin kendisini yazd�r yani"*p" gibi
//sonra pinterin g�sterdi�i de�eri de�i�tir
//ve en ba�ta pinterin g�sterdi�i adresteki de�i�keni tekrar yazd�r
//bunu yapman�n sebebi de ilk tan�mlanan de�i�keni pinter ile nas�l de�i�tirilece�ini g�rmek 

int main()
{
	int a=5;
	int *pa;
	pa=&a;
	printf("a---:%d\n",a);
	//printf("%d\n",*a);
	printf("&a---:%d\n",&a);
	printf("pa---:%d\n",pa);
	printf("&pa---:%d\n",&pa);
	printf("*pa---:%d\n",*pa);
	//%p ile
		printf("a---:%p\n",a);
	//printf("%d\n",*a);
	printf("&a---:%p\n",&a);
	printf("pa---:%p\n",pa);
	printf("&pa---:%p\n",&pa);
	printf("*pa---:%p\n",*pa);
	
}
