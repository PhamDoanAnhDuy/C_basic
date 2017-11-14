#include "stdio.h"
int main()
{
	int i,j,n,so=0,k=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	for (i=2;i<=n;i++) {
		for (j=1;j<=i;j++) {
			if (i%j==0) so=so+1;
		}
		if (so==2) k=k+1;
		so=0;
	}
	printf("So so nguyen to la: %d",k);
}
