9
#include <iostream>
using namespace std;
int main()
{
    int i = 0, j = 0,capacidad = 0,
    pesoSaca = 0, cargado = 0;
    for  (i =1; i<=20; i++) {
        cout<< "\nIntroduzca la capacidad del camion numero '"<<i<< "' en kgs: ";
        cin>>capacidad;
        cout<<endl;
        while (cargado + pesoSaca <= capacidad)
        {
            if (pesoSaca >0) {
                cout<< ("\tCargue la saca numero ")<<j<<"->\t";
                cargado = cargado + pesoSaca;
                cout<<cargado;
            }
            j ++;
            cout<< "\n\nIntroduzca el peso de la saca numero "<<j<<"en kgs: "<<"\t";
            cin>>pesoSaca;
        }
        if (i<20) {
            cout<< "\nNo cargue todavía.\nDespache el camion numero " <<i;
            cout<<"\nPonga a cargar el camion numero "<< i+1<<": \n";
            cargado = 0;
        }
    }
    cout<< "\nNo cargue esta saca. Despache el camion numero " << i-1  ;
   return 0;
}
14
=====================================
#include <iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout<<" numero ?"<<endl;
    cin>>n;
    for(int i=1;i<(n+1);i++)
    {
        if(n%i==0)
           c++;
    }
    if(c!=2)
        cout<<"\nNo es Primo"<<endl;
    else
        cout<<"\nSi es Primo"<<endl;
    return 0;
}
15
=====================================
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	int temp;
	while(a>b)
	{
		if(a%b==0)
		{
			return b;
		}
		temp=a;
		a=b;
		b=temp-a;
		if(b>a)
		{
			temp=b;
			b=a;
			a=temp;
		}
	}
}
int main()
{
	int x,y,mcd;
	cout<<"\nIngrese valor x: ";
	cin>>x;
	cout<<"\nIngrese valor y: ";
	cin>>y;
	if(x==y)
	{
		mcd=x;
	}
	if(x==0 || y==0 )
	{
		mcd=(0==x)? y:x;
	}
	else
	{
		if(x>=y)
		{
			mcd=gcd(x,y);
		}
		else
		{
			mcd=gcd(y,x);
		}
	}
	cout<<"\nEl maximo comun divisor es: "<<mcd;
return 0;
}
16
=====================================
#include <iostream>
using namespace std;

void itera(int n, char C[])
{
    int i;
    int inc = 0;
    int it = n * (n - 1);

    while (inc < it) {
        for (i = n - 1; i > 0; i--) {
            int aux = C[i-1];
            C[i-1] = C[i];
            C[i] = aux;
            for (int j = 0; j < n; j++)
                cout << C[j];
            cout << endl;
            inc++;
        }
    }
}

int main()
{
    int n;

    cout << "Cuantos caracteres desea iterar? ";
    cin >> n;

    char C[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese caracter " << i + 1 << ": ";
        cin >> C[i];
    }
    itera(n, C);

    return 0;
}
