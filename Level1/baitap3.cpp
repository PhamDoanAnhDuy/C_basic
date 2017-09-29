#include "stdio.h"
#include "conio.h"
int main()
{
	int dd,mm,yy;
	printf("Nhap ngay:");
	scanf("%d",&dd);
	printf("Nhap thang: ");
	scanf("%d",&mm);
	printf("Nhap nam: ");
	scanf("%d",&yy);
	printf("Thoi gian: %02d/ %02d/ %02d",dd,mm,yy);
	getch();
}
