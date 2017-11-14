#include "stdio.h"
int main()
{
	int i,j,n;
	int a[5][5],b[5][5];
	n=1;
	for (i=0;i<5;i++) {
		for (j=0;j<5;j++) {
			a[i][j]=n++;
			}
		}
		for (i=0;i<5;i++) {
		    for (j=0;j<5;j++) {
			b[j][i]=a[i][j];
		}
	}		
    for (j=0;j<5;j++) {
		for (i=0;i<5;i++) {
			printf("%d \t",b[j][i]);
		}
		printf("\n");
	}
}
