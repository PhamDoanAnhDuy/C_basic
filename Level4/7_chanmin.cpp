#include "stdio.h"
int main()
{
	int i,n,min,chan=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	int a[n];
	min=9999;
	for (i=0;i<n;i++) {
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++) {
		if (a[i]%2==0) { chan=a[i];
			if (a[i]<min) min=a[i];
			else min=min;
		}
	    else ;	
	}
	if (chan!=0) printf("So chan nho nhat: %d",min);
	else printf("-1");
	
}
