#include <stdio.h>

int main(void) {
	int n,i,j,k,A[n],flag=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(A[i]+A[j]==k)
			{
			//	printf("Yes");
				flag=1;
				break;
			}
		}
	}
		if(flag==1)
		printf("YES");
		else
		printf("NO");
			
		return 0;
	}
	
