#include<iostream>
#include<algorithm>
using namespace std;

int permutar(int n)
{
	if(n<2)
	{
    	return 1;
    }
  	else{
    	return n * permutar(n-1);
	}
}

int main(int argc,char** argv)
{
	int num,m,k,p,q;
	printf("permutaciones: ",num);
	scanf("%d",&num);
	char L[num];
	for(int i=1;i<=num;i++)
	{
		L[i]=i;
	}
	for(int i=2;i<=permutar(num);i++)
	{
		m=num-1;
		while(L[m]>L[m+1])
		{
			m=m-1;
			printf("%d",m,"\n");
		}
		k=num;
		while(L[m]>L[k])
		{
			k=k-1;
			printf("%d",k,"\n");
		}
		swap(L[m],L[k]);
		p=m+1;
		q=num;
		while(p<q)
		{
			swap(L[p],L[q]);
			p=p+1;
			q=q-1;
			printf("%d",p,"\n");
			printf("%d",q,"\n");
		}
	}
	return 0;
}
