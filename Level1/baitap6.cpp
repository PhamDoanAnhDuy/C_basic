#include "stdio.h"
#include "conio.h"
#include "math.h"
int main()
{
	int donvi,chuc,tram,n,x;
	printf("Nhap so co 3 chu so: ");
	scanf("%d",&n);
	donvi=(int)(n/100);
	x=(int)(n/10);
	chuc=(int)(x%10);
	tram=(int)(n%10);
	printf("So da nghich dao ");
	printf("%d",tram);
	printf("%d",chuc);
	printf("%d",donvi);
	getch();
}
