#include <stdio.h>
#include <stdlib.h>

/* Deger Deðiþtiren Fonksiyon */
void degistiren(int dizi[], int n);

int main() {
	
	int dizi2[3]={10,20,30};
	int i;
	degistiren(dizi2, 3);
	
	printf("sonrasi");
	for(i=0; i<3; i++)
	{
	printf("%d\t", dizi2[i]);
}

}

void degistiren(int dizi[], int n)
{
	
	int i;
	printf("oncesi");
	for(i=0; i<n; i++)
	{
	 printf("%d\t",dizi[i]);
	 dizi[i]*=10;

	}
	printf("\n");
	
}


