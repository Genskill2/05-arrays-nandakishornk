/* Enter your solutions in this file */
#include <stdio.h>

int max(int a[],int n)
{
	int i,m=-2048;
	for(i=0;i<n;i++)
		if(a[i]>m)
			m=a[i];
	return m;
}

int min(int a[],int n)
{
	int i,m=2048;
	for(i=0;i<n;i++)
		if(a[i]<m)
			m=a[i];
	return m;
}

float average(int a[], int n)
{
	int s=0,i;
	for(i=0;i<n;i++)
		s+=a[i];
	return s/n;
}

int mode(int a[],int n)
{
	int i,j,c,oc=0,mode;
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
			if(a[j]==a[i])
				c++;
		if(c>oc)
		{
			oc=c;
			mode=a[i];
		}
	}
	return mode;
}

int factors(int n,int a[])
{
	int i,c=0,p={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	while(n!=1)
	{
		for(i=0;i<15;i++)
			if(n%p[i]==0)
			{
				a.append(p[i]);
				c++;
				n=n/p[i];
			}
	}
	return c;
}
