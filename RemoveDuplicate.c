#include<stdio.h>
#include<string.h>
int main()
{
	char a[100000];
	int i,n,j,k;
	int t;
	scanf("%d",&t);
	int tt=t+1;
	while(tt--)
	{
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%c",a[i]);
	}return 0;
}
