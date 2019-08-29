#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,pc=0,nc=0,zc=0,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			nc++;
	   }
		else if(a[i]==0)
		{
			zc++;
	   }
		else if(a[i]>0)
		{
			pc++;
		}
	}
	printf("%.6f %.6f %.6f ",nc/n,zc/n,pc/n);
}
