p11
#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int dado()
{
   int dado1,dado2 ,dado3,dado4,s=0,s2=0;
    srand(time(0));
    dado1 = rand() % 6+1;
    dado2 = rand() % 6+1;
    s=dado1+dado2;
    cout<<"\nEn el primer tiro se obtuvieron los diguientes valores:"<<endl;
    cout<<"Primer dado:\t"<<dado1<<endl;
    cout<<"Segundo dado:\t"<<dado2<<endl;
    cout<<"La suma es: "<<s<<endl;
    if (s ==7 || s==11)
    {
        cout<<"\nFelicidades GANO!!!"<<endl;
    }
    else if( s==2|| s==3 ||s==12)
    {
        cout<<"\nPERDIO!!!"<<endl;
    }
    else
    {
        cout<<("\n=====================================");
        cout<<("\nSu puntaje es: ")<<s<<endl<<endl;

        while(s2!=7)
        {
            dado3 = rand() % 6+1;
            dado4 = rand() % 6+1;
            s2=dado3+dado4;
            cout<<"\nPrimer dado:\t"<<dado3<<endl;
            cout<<"Segundo dado:\t"<<dado4<<endl;
            if (s==s2)
            {
                cout<<("\nGano!!, obtuvo el mismo puntaje ")<<endl;
                break;
            }
            else if ( s2==7)
            {
                cout<<("Perdio!! le salio 7");
            }
            else
                s2=0;

        }

    }
}
int main()
{
   dado();

   return 0;
}
"====================================="
12
#include <iostream>

using namespace std;
int promedio()
{
    int  edad,n=0,j=0,a=0,v=0 ,c=0;
    float  peso,nino=0, joven=0, adulto=0, viejo=0;



    while(c<15)
    {   cout<<"Introduce edad:	";
        cin>>edad;
        cout<<"Introduce peso:	";
        cin>>peso;

        if(edad>0 && edad<=12)
            {
            nino+=peso;
            n+=1;
            }

        else if(edad>=13 && edad<=29)
            {
                joven+=peso;
                j+=1;
            }

        else if(edad>=30 && edad<=59)
            {
                adulto+=peso;
                a+=1;

            }

        else if(edad>=60)
            {
                viejo+=peso;
                v+=1;
            }
        else
            cout<<("dato incorrecto");


        c+=1;

    }

    cout<<("\n\n\t Promedio niño(a)")<<(nino/n)<<endl;
    cout<<("\n\n\t Promedios Jovenes")<<(joven/j)<<endl;
    cout<<("\n\n\t Promedios Adultos")<<(adulto/a)<<endl;
    cout<<("\n\n\t Promedios Viejos")<<(viejo/v)<<endl;


}
int main()
{
   promedio();
   return 0;
}
"====================================="
13
#include<iostream>
using namespace std;

int sueldo(int a,int b)
{
    int pago,sum=0;
    for (int i=1;i<=b;i++)
            sum=sum+i;
    pago=100+a+sum;
    return pago*2;
}

int main()
{
    int e,s;
    cout<<"Ingrese su edad: ";
    cin>>e;
    cout<<"Ingrese sus años de servicio: "<<endl;
    cin>>s;
    cout<<"Su pago quincenal es: "<<sueldo(e,s);

}
"====================================="
14
#include<iostream>
using namespace std;

int control_ani()
{
    int ani,i,mue=0,e1=0,edad,e2=0,e3=0;

    cout<<"\nDigite el numero correspondiente al animal que se desea estudiar"<<endl;
    cout<<"\n1. Elefantes. \n2. Jirafas. \n3. Chimpances"<<endl<<endl;
    cin>>ani;
    if ( ani>0 && ani<4)
    {
       if (ani==1)
        {
            i=20;
        }
        else if (ani==2)
        {
            i=15;
        }
        else
        {
            i=40;
        }

        for (;i>0;i--)
        {
            mue++;
            cout<<"\nEdad del Animal "<<mue<<" (en anhos):\t";
            cin>>edad;

            if (edad<=1)
                e1++;
            else if (edad<3)
                e2++;
            else
                e3++;
        }

        cout<<"\nPorcentaje entre 0 y 1 anho =\t \t"<<e1*100/mue<<"%"<<endl;
        cout<<"Porcentaje mayor que 1 y 3 anhos =\t"<<e2*100/mue<<"%"<<endl;
        cout<<"Porcentaje con 3 o mas anhos = \t\t"<<e3*100/mue<<"%"<<endl;
    }

    else
    {
        cout<<"\nOpcion invalida";

    }

}
int main()
{
    control_ani();

    return 0;

}
