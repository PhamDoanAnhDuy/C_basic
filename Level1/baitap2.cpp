#include "stdio.h"
#include "conio.h"
#include "math.h"
int main()
{
	float X,MON1,MON2,MON3;
	float TB;
	printf("Nhap MON1: ");
	scanf("%f",&MON1);
	printf("Nhap MON2: ");
	scanf("%f",&MON2);
	printf("Nhap MON3: ");
	scanf("%f",&MON3);
	TB=(float)(MON1+MON2+MON3)/3;
	printf("Diem trung binh 3 mon la: =%5.3f",TB);
	getch();
}
