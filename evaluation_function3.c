#include <stdio.h>
#include <stdlib.h>

/* Deger Deðiþtiren Fonksiyon */
void notgir(int notlar[2][3], int n, int m);

int main() 
{
int ogrenci[2][3];
int i,j;

notgir(ogrenci,2,3);
printf("girilen notlar:\n");
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",ogrenci[i][j]);
	}
	printf("\n");

}


	
}
void notgir(int notlar[2][3], int n, int m)
{ 
int i,j;
printf("lutfen notlari girin:\n");

for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		scanf("%d",&notlar[i][j]);
	}
}

}



