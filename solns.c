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
	return float(s)/n;
}

int mode(int a[],int n)
{
	int i,l,h,c[100],m=-2048,mode;
	l=min(a,n);
	h=max(a,n);
	for(i=l;i<(h+1);i++)
		c[i]==0;
	for(i=0;i<n;i++)
		c[a[i]]++;
	for(i=l;i<(h+1);i++)
		if(c[i]>m)
		{
			m=a[i];
			mode=i;
		}
	return mode;
}
