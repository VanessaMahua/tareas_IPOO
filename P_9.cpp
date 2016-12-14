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
#include <iostream>
using namespace std;
class cuenta
{
    //sobrentiende privados
    string nro;
    float saldo;
    public:
    cuenta (string, float);
    void setnro(string);
    void setsaldo(float);
    string getnro();
    float getsaldo();
    void depositar(float);
    void retirar(float);
};
cuenta :: cuenta(string n, float s)
{
    nro=n;
    saldo=s;

}
void cuenta:: setnro(string n)
{
    nro=n;
}
void cuenta:: setsaldo(float s)
{
    saldo=s;
}
float cuenta ::  getsaldo()
{
    return saldo;
}
void cuenta:: depositar(float x)
{
    int total=x+getsaldo();
    setsaldo(total);
}
void cuenta:: retirar(float x)
{
    int total =getsaldo()-x;
    setsaldo(total);
}
int main()
{


    float saldo ,dep,ret ;
    int opc;
    cout<<("Ingrese monto de saldo: ");cin>>saldo;
    cuenta c1("0001", saldo );
    //cout<<"saldo= "<<c1.getsaldo()<<endl;
    //c1.depositar(2000);
    //cout<<"saldo= "<<c1.getsaldo()<<endl;
    //c1.retirar(1000);
    //cout<<"saldo= "<<c1.getsaldo()<<endl;


    cout <<"\n  (0) depositar\n (1) mostrar saldo\n (2)retirar \n (3)salir:\n";cin>>opc;

     while (true)
     {

     if(opc==0)
        {
            cout<<("Ingrese monto a depositar: ");cin>>dep;
            c1.depositar(dep);

        }
    else if (opc==1)
     {
                    cout<<c1.getsaldo();
     }

     else if (opc==2)
     {
            cout<<("Ingrese monto a retirar: ");cin>>ret;

            c1.retirar(ret);
     }


    else
        break;
     cout <<" \n (0) depositar\n (1) mostrar saldo\n (2)retirar \n (3)salir:\n";cin>>opc;
    }


    return 0;
}

