#include "stdio.h"
#include "conio.h"
#include "math.h"
int main()
{
	int a,b,c;
	printf("Nhap so can kiem tra: ");
	scanf("%d",&a);
	b=sqrt(a);
	c=b*b;
	if (c!=a) printf("Khong la so chinh phuong");
	else printf("La so chinh phuong");
	getch();
	
}

