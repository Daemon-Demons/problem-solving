#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k,c=1;
	k=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<(2*n - 1);j++)
		{
			if(i+j<=n-2 || i+j>=2*n-1)
			{
				printf(" ");
			}
			else
			{
				printf("%2d ",c);
				c+=k;
			}
		}
		printf("\n");
		k*=-1;
		c+=n+k;
	}
}
