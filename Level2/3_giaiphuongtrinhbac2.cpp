#include "stdio.h"
#include "conio.h"
#include "math.h"
int main()
{
	int a,b,c,denta,x1,x2;
	printf("Nhap a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	denta=(float)(b*b-4*a*c);
	x1=((-b+sqrt(denta))/(2*a));
	x2=((-b-sqrt(denta))/(2*a));
	if (denta>=0) {
		if (denta>0){
		printf("x1= %d \n",x1);
		printf("x2= %d",x2);}
		else printf("x1 =x2 = %d",x1);
	} 
	if (denta<0) printf("Phuong trinh vo nghiem");
	getch();
}
