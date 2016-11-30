#include <iostream>
using namespace std;
int resul (int (*func)(int, int),int a,int b)
{
    return (*func)(a,b);
}
int suma(int a, int b)
{
    return a+b;
}
int resta(int a , int b)
{
    return a-b;
}
int multiplicacion(int a , int b)
{
    return a*b;
}
int division(int a , int b)
{
    if (b>0)
        return a/b;
    else
        return -1;
}

 int main()
 {
     int opc,a,b;
     int (*f[4])(int,int)={suma,resta,multiplicacion,division};
     cout<<"\nA y B:";cin>>a>>b;
     cout <<"Ingrese \n (0) suma\n (1)resta \n (2)multiplicacion \n (3)division:\n";cin>>opc;
     while (opc>=0 && opc<=4)
     {

     if(opc==0)
        cout<<resul(suma,a,b);
     else if (opc==1)
        cout<<resul(resta,a,b);
    else if (opc==2)
        cout<<resul(multiplicacion,a,b);
    else if (opc==3)
        if (resul(division,a,b)==-1)
        cout<<"no se puede efectuar la division";
        else
            cout<<resul(division,a,b);
    else
        cout<<"Opcion incorrecta";
     cout<<"\nA y B:";cin>>a>>b;
     cout <<"Ingrese (0)\n suma(1)resta \n (2)multiplicacion \n (3)division:\n";cin>>opc;
    }
 }
