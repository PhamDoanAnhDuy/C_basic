#include "stdio.h"
#include "conio.h"
#include "math.h"
int main()
{
	float a,b,c;
	float denta,t1,t2;
	float t;
	printf("Nhap a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	denta=(float)(b*b-4*a*c);
	t1=(float)((-b+sqrt(denta))/(2*a));
	t2=(float)((-b-sqrt(denta))/(2*a));
	if (denta!=0) {
		if (denta<0) printf("Phuong trinh vo nghiem");
		else if (denta>0) {
			{
				if (t1<0) printf(" Vo nghiem");
				else if (t1>0) {
					printf("x1= %f\n",sqrt(t1));
					printf("x2= %f",-sqrt(t1));
				}
				else printf("\nx1=x2= %f",0);
			}
			{
				if (t2<0) printf(" \n Vo nghiem");
				else if (t2>0) {
					printf("\nx3= %f\n",sqrt(t2));
					printf("x4= %f",-sqrt(t2));
				}
				else printf("\nx3=x4= %f",0);
			}
		}
		}
	else {
			t=(float)(-b/(2*a));
			if (t!=0) {
				if (t<0) printf("Vo nghiem");
				else {
					printf("x1= %f\n",sqrt(t));
					printf("x2= %f",-sqrt(t));
				}
			}
			else printf("x1=x2=x3=x4= %f",0);
		}
	getch();
}
