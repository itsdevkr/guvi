#include <stdio.h>
int reverse(int n)
{
	int t=0,r;
	int temp=n;
	while(n>0)
	{
		r=n%10;
		t=t*10+r;
		n=n/10;
	}
	//printf("%d",t);
	if(t==temp)
	return 1;
	else
	return 0;
}
int main(void) {
	int n,s=0,r;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	//printf("%d",s);
	if(reverse(s)==1)
	printf("YES");
	else
	printf("NO");
	//printf("%d",reverse(n));
	return 0;
}
