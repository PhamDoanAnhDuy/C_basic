#include "stdio.h"
#include "conio.h"
#include "math.h"
int main()
{
	int a,b,c,C;
	float p,S;
	printf("Nhap do dai 3 canh tam giac:");
	scanf("%d %d %d",&a,&b,&c);
	C=(float)(a+b+c);
	p=(float)(C/2);
	S=(float)(sqrt((p-a)*(p-b)*(p-c)));
	printf("CHU VI: =%d \n",C);
	printf("DIEN TICH: =%f",S);
	getch();
}
