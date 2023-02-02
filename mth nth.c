#include<stdio.h>
int main()
{
	int arr[]={10,23,11,28,29};
	int m,n,t;
	printf("enter m and n:");
	scanf("%d%d",&m,&n);
	for(int i=0;i<5-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
            }
		}
		
	}
}
printf("%dth minimum:%d\n",m,arr[m-1]);
printf("%dth maximum:%d",n,arr[5-n]);
}
