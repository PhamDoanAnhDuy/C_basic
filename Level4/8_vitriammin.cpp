#include "stdio.h"
int main()
{
	int i,n,min,am=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	int a[n];
	min=0;
	for (i=0;i<n;i++) {
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++) {
		if (a[i]<0) { am=a[i];
			if (a[i]<min) min=a[i];
			else min=min;
		}
	    else ;	
	}
	if (am!=0) printf("Vi tri so am nho nhat: %d",i);
	else printf("-1");
	
}
