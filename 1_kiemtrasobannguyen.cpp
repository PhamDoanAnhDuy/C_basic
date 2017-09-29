#include "stdio.h"
#include "conio.h"
#include "math.h"
int main()
{
	float a,b,c;
	printf("Nhap so can kiem tra: ");
	scanf("%f",&a);
	b=(int)(a);
	c=(float)(a-b);
	if (c!=0) printf("La so ban nguyen");
	else printf("Khong la so ban nguyen");
	getch();
}
