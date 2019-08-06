#include <stdio.h>

int main(void) {
	int n,i,j,s=0;
	scanf("%d",&n);
	int A[n][n];
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&A[i][j]);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	if(i==j)
	{
		s=s+A[i][j];
	}
	printf("%d",s);
	return 0;
}
