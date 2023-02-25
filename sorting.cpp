#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void quick(int* a,int l,int u)
{
	if(l<u)
	{
		int i,j,c,m;
		m=a[u];
		i=l-1;
		for(j=l;j<u;j++)
		{
			if(a[j]<m)
			{
				i++;
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
		a[u]=a[i+1];
		a[i+1]=m;
		quick(a,l,i);
		quick(a.i+2,u)
	}
	
	
//	if(l<u)
//	{
//		int i,j,c,m;
//	m=a[u];
//	i=l-1;
//	for(j=l;j<u;j++)
//	{
//		if(a[j]<m)
//		{
//			i++;
//			c=a[i];
//			a[i]=a[j];
//			a[j]=c;
//		}
//	}
//	a[u]=a[i+1];
//	a[i+1]=m;
//	
//		quick(a,l,i);
//		quick(a,i+2,u);
//		}	
}

void merge(int* a,int n)
{
	if(n!=1)
{

	
	int x[n/2];
	int y[n-(n/2)];
	//int* m;
	int i,j,k;
	for(i=0;i<n/2;i++)
	{
		x[i]=a[i];
	}
	i=0;
	for(j=(n/2);j<n;j++)
	{
		y[i]=a[j];
		i++;
	}
	
	merge(x,(n/2));
	merge(y,n-(n/2));
	
	i=0;
	j=0;
	k=0;
	while(i<(n/2)&&j<(n-(n/2)))
	{
		if(x[i]<y[j])
		{
			a[k]=x[i];
			k++;
			i++;
			
		}
		else{
			a[k]=y[j];
			j++;
			k++;
		}
	}
	
	while(i<(n/2))
	{
		a[k]=x[i];
		i++;
		k++;
	}
	while(j<(n-(n/2)))
	{
		a[k]=y[j];
		j++;
		k++;
	}
}
}


int main()
{
	int n,i,j,c,f,max;
	cout<<"Enter length of the array\n";
	cin>>n;
	int m[n];
	
	
//	cout<<"Enter elements in array\n";
	for(i=0;i<n;i++)
	m[i]=random;
	
	//bouble
//	for(i=0;i<n-2;i++)
//	{
//		for(j=0;j<n-i-1;j++)
//		{
//			if(m[j]>m[j+1])
//			{
//				c=m[j];
//				m[j]=m[j+1];
//				m[j+1]=c;
//			}
//		}
//	}
	

//obtimized


//for(i=1;i<n;i++)
//{
//	f=1;
//	for(j=n-1;j>=i-1;j--)
//	{
//		if(m[j]>m[j+1])
//		{
//			f=0;
//			c=m[j];
//			m[j]=m[j+1];
//			m[j+1]=c;
//			
//		}
//		if(f==1)
//		break;
//	}
//}


//Selection
//for(i=0;i<n-1;i++)
//{
//	f=i;
//	for(j=i+1;j<n;j++)
//	{
//		if(m[j]<m[f])
//		f=j;
//	}
//	c=m[i];
//	m[i]=m[f];
//	m[f]=c;
//	
//}
	
	
	//insertion
//	for(i=1;i<n;i++)
//	{
//		c=m[i];
//		j=i;
//		while(j>0&&m[j-1]>c)
//		{
//			m[j]=m[j-1];
//			j--;
//		}
//		m[j]=c;
//	}



//shell

//for(f=n/2;f>0;f/=2)
//{
//	for(i=f;i<n;i++)
//	{
//		c=m[i];
//		for(j=i;j>=f&&m[j-f]>c;j-=f)
//		{
//			m[j]=m[j-f];
//		}
//		m[j]=c;
//	}
//}



//quick
//quick(m,0,(n-1));


//merge
//merge(m,n);



//count
//max=0;
//int a[n];
//for(i=0;i<n;i++)
//{
//	if(m[i]<max)
//	max=m[i];
//	a[i]=m[i];
//}
//if(max<n)
//max+=n;
//else
//max+=1;
//int d[max];
//for(i=0;i<max+1;i++)
//{
//	d[i]=0;
//	}
//	for(i=0;i<n;i++)
//	d[m[i]]+=1;
//	for(i=1;i<max+1;i++)
//		d[i]+=d[i-1];
//		
//		for(i=0;i<n;i++)
//		{
//			m[d[a[i]]-1]=a[i];
//			d[a[i]]--;
//		}



////radix
//cout<<"Enter max digits";
//cin>>max;
//int a[n];
//for(i=10;i<pow(10,max);i*=10)
//{
//	for(j=0;j<n;j++)
//	{
//		a[j]=(m[j]%i)/(i/10);
//	}
//	
//	for(f=0;f<n;f++)
//	{
//		for(j=0;j<n-f-1;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				c=m[j];
//				m[j]=m[j+1];
//				m[j+1]=c;
//				c=a[j];
//				a[j]=a[j+1];
//				a[j+1]=c;
//			}
//		}
//	}
//}

	
	cout<<"Sorted:\n";
	for(i=0;i<n;i++)
	cout<<m[i]<<endl;
	
}
