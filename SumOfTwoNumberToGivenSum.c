#include <stdio.h>

int main(void) {
	int n,i,j,k,A[n],flag=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	scanf("%d",&k);
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
		printf("Yes");
		else
		printf("No");
			
		return 0;
	}
	
