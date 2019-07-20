#include <stdio.h>

int main(void) {
	int n,c,i,j;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	c=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{if(n*i==A[j])
		c++;}
	}
	printf("%d",c);
	return 0;
}
