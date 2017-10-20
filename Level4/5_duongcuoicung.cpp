#include "stdio.h"
#include "conio.h"
int main()
{
	abc: ;
	int i,n,duong=0,t=-1;
	printf("\n Nhap n: ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++) {
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++) {
		if (a[i]>0) duong=a[i];
		else {
			
		}
	}
	if (duong!=0) printf("So duong cuoi cung: %d",duong);
	else printf("-1");
	goto abc;
	getch();
}
