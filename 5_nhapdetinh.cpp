#include "stdio.h"
#include "conio.h"
#include "math.h"
int main()
{
	const float pi=3.14;
	int a,b,c,d,R,So;
	float Ptg,Stg,Pv,Sv,Pcn,Scn,Pt,St,q;
	printf("Nhap So: ");
	scanf("%d",&So);
	if (So==1) {
		printf("Nhap 3 canh a,b,c: ");
		scanf("%d%d%d",&a,&b,&c);
		Ptg=(float)(a+b+c);
		q=(float)(Ptg/2);
		Stg=(float)sqrt(q*(q-a)*(q-b)*(q-c));
		printf("Chu vi tam giac: %f \n",Ptg);
		printf("Dien tich tam giac: %f",Stg);
	}
	else if (So==2) {
		printf("Nhap canh a: ");
		scanf("%d",&a);
		Pv=(float)(4*a);
		Sv=(float)(a*a);
		printf("Chu vi hinh vuong: %f \n",Pv);
		printf("Dien tich hinh vuong: %f",Sv);
	}
	else if (So==3) {
		printf("Nhap cdai,crong: ");
		scanf("%d%d",&a,&b);
		Pcn=(float)((a+b)*2);
		Scn=(float)(a*b);
		printf("Chu vi hinh chu nhat: %f \n",Pcn);
		printf("Dien tich hinh chu nhat: %f",Scn);
	}
	else if (So==4) {
		printf("Nhap R: ");
		scanf("%d",&R);
		Pt=(float)(2*pi*R);
		St=(float)(pi*R*R);
		printf("Chu vi hinh tron: %f \n",Pt);
		printf("Dien tich hinh tron: %f",St);
	}
	getch();
}
