#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float notlar(int vize,int final);

int main() {
	int vize, final;
	int ortalama=0;
	
	
	printf("vize notunu girin:\n");
	scanf("%d", &vize);
	printf("final notunu girin:\n");
	scanf("%d", &final);
	
	ortalama = notlar(vize,final);
	
	printf("not ortalamasi: %d\n", ortalama);
	return 0;
}

float notlar(int viz, int fin)
{
	int ort=0;
	ort= (viz+fin)/2;
	return ort;
}
