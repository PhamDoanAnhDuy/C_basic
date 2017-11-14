#include "stdio.h"
int main()
{
	int i,n,k=0;
	int a[n];
	printf("Nhap n: ");
	scanf("%d",&n);
	for (i=0;i<=n;i++) {
		a[i]=i;
		if (a[i]%2==0) k++;
	}
	printf("So so chan: %d",k);
}
