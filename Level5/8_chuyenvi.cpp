#include "stdio.h"
int main()
{
	int i,j,n,m,tam,nho;
	int a[100][100];
	printf("So dong: ");
	scanf("%d",&n);
	printf("So cot: ");
	scanf("%d",&m);
	for (i=0;i<n;i++) {
		for (j=0;j<m;j++) {
			printf("Nhap a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for (i=0;i<n;i++) {
		for (j=0;j<m;j++) {
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i=1;i<n;i++) {
		nho=n;
		n=m;
		m=nho;
		for (j=0;j<m;j++) {
			tam=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=tam;
		}
	}
	for (i=0;i<m;i++) {
		for (j=0;j<n;j++) {
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
}
