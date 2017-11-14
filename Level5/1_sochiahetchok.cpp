#include "stdio.h"
int main()
{
	int i,n,k;
	int a[n],*p;
	abc:
	printf("Nhap n: ");
	scanf("%d",&n);
	if (n<1) goto abc;
	printf("Nhap k: ");
	scanf("%d",&k);
	for (i=1;i<=n;i++) {
		a[i]=i;
		p=a;
		if (a[i]%k==0) printf("%d",*(p+i));
	}
}
