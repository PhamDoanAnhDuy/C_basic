#include "stdio.h"
int main()
{
	int i,j,n,t;
	printf("Nhap n: ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++) {
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++) {
		for (j=i+1;j<n;j++) {
			if (a[i]>a[j]) {
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		printf("  %d  ",a[i]);
	}
}
