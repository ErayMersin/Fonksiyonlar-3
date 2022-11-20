#include<stdio.h>
#include<stdlib.h>

int kupbul(int sayi)
{
	int sonuc = sayi * sayi * sayi;
	return sonuc;
}

int main() {

	int s;
	printf("Sayiyi Girin: ");
	scanf_s("%d", &s);
	printf("\nSonuc=%d", kupbul(s));

	return 0;
 }