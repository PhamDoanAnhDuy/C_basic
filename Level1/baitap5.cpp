#include "stdio.h"
#include "conio.h"
#include "math.h"
int main()
{
	float A,a,b;
	printf("Nhap 2 so a va b: ");
	scanf("%f %f",&a,&b);
	A=(float)(log(b)/log(a));
	printf("Ket qua: =%f",A);
	getch();
	
}
