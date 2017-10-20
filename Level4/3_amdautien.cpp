#include "stdio.h"
#include "conio.h"
int main()
{
	int i,n,am=0,t=-1;
	abc: ;
	printf("\n Nhap n: ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++) {
		printf("Nhap a[%d]",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++) {
		if (a[i]<0) { am=a[i];
			printf("So am dau tien: %d",a[i]);
			break;}
		else ;		   	
	}
	if (am!=0) ;
	else printf("%d",t);
	goto abc;
}
