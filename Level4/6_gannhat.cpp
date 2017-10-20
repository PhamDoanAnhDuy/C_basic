#include "stdio.h"
#include "conio.h"
int main()
{
	int i,j,n;
	float t,g,x;
	printf("Nhap gia tri x: ");
	scanf("%f",&x);
	printf("Nhap n: ");
	scanf("%d",&n);
	float a[n];
	for (i=0;i<n;i++) {
		printf("Nhap a[%d]: ",i);
		scanf("%f",&a[i]);
	}
	for (j=0;j<n;j++) {
		printf("Nhap a[%d]: ",j);
		scanf("%f",&a[j]);
	}
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++) {
			t=a[i]-x;
			g=a[j]-x;
			if (t<g,t=g) {
			   printf("Gia tri gan x nhat: %5.3f %5.3",a[i],a[j]);break;}
			else if (t>g,t=g) {
			   printf("Gia tri gan x nhat: %5.3f %5.3",a[i],a[j]);break;}
		}
	}
}
