#include <stdio.h>
#include <stdlib.h>

/* Deger Deðiþtiren Fonksiyon */
void notgir(int notlar[2][3], int n, int m);

int main() 
{
int ogrenci[2][3];
int i,j;
float ortalama1,ortalama2,ortalama3;

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
///
printf("ortalamalar :\n");
for(i=0;i<2;i++)
{
	ortalama1+=ogrenci[i][0];

		
}
printf("%f\t",ortalama1/2);
///
for(i=0;i<2;i++)
{
	ortalama2+=ogrenci[i][1];

}
		printf("%f\t",ortalama2/2);

///
for(i=0;i<2;i++)
{
	ortalama3+=ogrenci[i][2];

}
		printf("%f\t",ortalama3/2);
	
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



