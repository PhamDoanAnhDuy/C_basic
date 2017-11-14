#include "stdio.h"
int main()
{
	int i,n;
	int a[n];
	printf("Nhap n: ");
	scanf("%d",&n);
	for (i=0;i<n;i++) {
		printf("Nhap a[%d]",i);
		scanf("%d",&a[i]);
	}
}
