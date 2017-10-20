#include "stdio.h"
#include "conio.h"
int main()
{
	abc: ;
	int i,n,min;
	printf("\n Nhap n: ");
	scanf("%d",&n);
	int a[n];
	min=9999;
	for (i=0;i<n;i++) {
		printf("\nNhap a[%d]",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++) {
		if (min>=a[i]) min=a[i];
		else min=min;
	}
	printf("Min: %d",min);
	goto abc;
	getch();
	return (0);
}
