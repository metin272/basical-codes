#include <stdio.h>
#include <stdlib.h>

/* Deger Deðiþtiren Fonksiyon */
void dd(int d1[],int d2[],int d3[],int n,int m,int o);

int main() {
int i;

int dizi1[2]={4,5};
int dizi2[3]={4,5,7};
int dizi3[4]={4,5,6,7};
printf("onceki degerler:\n");
for(i=0;i<2;i++){
	
printf("%d\t ",dizi1[i]);
}
printf("\n");
for(i=0;i<3;i++){
	
printf("%d\t ",dizi2[i]);
}
printf("\n");
for(i=0;i<4;i++){
	
printf("%d\t ",dizi3[i]);
}
printf("\n");


dd(dizi1,dizi2,dizi3,2,3,4);

	
}
void dd(int d1[],int d2[],int d3[],int n,int m,int o)
{
	int i;
	printf("sonraki degerler:\n");
	for(i=0;i<2;i++){
	
    printf("%d\t ",10*d1[i]);
    }
    printf("\n");
    	for(i=0;i<3;i++){
	
    printf("%d\t ",100+d2[i]);
    }
    printf("\n");
    	for(i=0;i<4;i++){
	
    printf("%d\t ",--d3[i]);
    }
	
}



