#include "stdio.h"
int main()
{
	int i,j,n,m;
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
}
