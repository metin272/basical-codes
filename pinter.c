#include <stdio.h>
#include <stdlib.h>

/* Pointer-2 */
//bir deðiþken tanýmla ve deðiþkenin adresini bir pointer a ata
//sonra bu deðiþkeni ekrana yazdýr
//deðikenin adresini yazdýr hem pointer deðiþkeni ile hem de deðiþkenin ismi ile 
// sonra pointer deðerinin adresini yazdýr
// sonra pinterin kendisini yazdýr yani"*p" gibi
//sonra pinterin gösterdiði deðeri deðiþtir
//ve en baþta pinterin gösterdiði adresteki deðiþkeni tekrar yazdýr
//bunu yapmanýn sebebi de ilk tanýmlanan deðiþkeni pinter ile nasýl deðiþtirileceðini görmek 

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
