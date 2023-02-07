#include<stdio.h>
int main()
{
	int n,i,j;
	int c,k=2;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(int m=0;m<=i;m++)
		{
			if(i==0||m==0)
			{
				k=1;
			}
			else
			{
				printf(" %d ",k);
				k++;
			}
			
		}
		printf("\n");
	}
}
