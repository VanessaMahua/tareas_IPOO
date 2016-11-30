#include <iostream>
using namespace std;

void crear(int **&M,int f,int c);
void llenar(int **M,int f,int c);
void mostrar(int **M,int f,int c);
void forma(int **M,int f,int c,int **P,int p,int q);

int main()
{
	int **M,f,c;
	cout<<"Filas?";cin>>f;
	cout<<"Columnas?";cin>>c;
	crear(M,f,c);
	llenar(M,f,c);
	mostrar(M,f,c);
	int **P,p,q;
	cout<<"Filas?";cin>>p;
	cout<<"Columnas?";cin>>q;
	crear(P,p,q);
	forma(M,f,c,P,p,q);
	mostrar(P,p,q);
	cin.get();
	return 0;
}
void crear(int **&M,int f,int c)
{
	M=new int*[f];
	for(int i=0;i<f;++i)
	{
		M[i]=new int[c];
	}
}
void llenar(int **M,int f,int c)
{
	for(int i=0;i<f;++i)
	{
		for(int j=0;j<c;++j)
		{
			cin>>*(*(M+i)+j);
		}
	}
}
void mostrar(int **M,int f,int c)
{
	for(int i=0;i<f;++i)
	{
		for(int j=0;j<c;++j)
		{
			cout<<*(*(M+i)+j)<<" ";
		}
		cout<<"\n";
	}
}
void forma(int **M,int f,int c,int **P,int p,int q)
{
	if((f*c)==(p*q))
	{
		int h=0,g=0;
		for(int i=0;i<f;++i)
		{
			for(int j=0;j<c;++j)
			{
				*(*(P+h)+g)=*(*(M+i)+j);
				++g;
				if(g==q)
				{
					++h;
					g=0;
					cout<<"\n";
				}
			}
		}
	}
	else
	{
		cout<<"Valores incorrectos ,las dimensiones no coinciden ";
	}
}
