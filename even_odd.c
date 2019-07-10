#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	if(n<0)
	printf("invalid");
	if(n%2==0)
	printf("Even");
	else
	printf("Odd");
	return 0;
}
