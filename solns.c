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
