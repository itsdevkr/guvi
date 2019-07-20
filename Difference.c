#include <stdio.h>

int main(void) {
	int n,a,b,u,v,i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	scanf("%d",&u);
	scanf("%d",&v);
	a=A[u-1];
	b=A[v-1];
	printf("%d",a-b);
	return 0;
}
