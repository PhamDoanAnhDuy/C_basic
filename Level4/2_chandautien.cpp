#include "stdio.h"
#include "conio.h"
int main()
{
	abc: ;
	int i,n,chan;
	printf("\n Nhap n: ");
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++) {
		printf("Nhap a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++) {
		if (a[i]%2!=0) ;
		else if (a[i]%2==0) 
		    {
		    printf("So chan dau tien: %d",a[i]);
			break;
			}
		else a[i]=-1;	
	}
	goto abc;
}
