#include "stdio.h"
#include "math.h"
int main()
{
	int i,n,nho,UCLN,BCNN,m,t,r;
	int a[100];
	printf("Nhap n: ");
	scanf("%d",&n);
	for (i=0;i<=n;i++) {
		printf("Nhap a[%d]",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<=n;i++) {
		t=a[i];
		m=a[i++];
		r=t%m;
	for (i=0;i<=n;i++) {
		while (r) {
			t=m;
			m=r;
			r=t%m;
			}
			BCNN=(a[i]*a[i++])/t;
			UCLN=m;			
	}
	}
	printf("UCLN %d",UCLN);
	printf("\nBCNN %d",BCNN);
}
