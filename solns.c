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
	float av;
	for(i=0;i<n;i++)
		s+=a[i];
	av=s/n;
	return av;
}

int mode(int a[],int n)
{
	int i,h=-2048,c[100],m=-2048,mode;
	for(i=0;i<n;i++)
		if(a[i]>h)
			h=a[i];
	for(i=0;i<=h;i++)
		c[i]==0;
	for(i=0;i<n;i++)
		c[a[i]]++;
	for(i=0;i<=h;i++)
	{
		if(c[i]>m)
		{
			m=a[i];
			mode=i;
		}
	}
	return mode;
}
