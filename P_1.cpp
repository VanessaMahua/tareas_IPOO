#include <iostream>

using namespace std;

int main()
{
    float pago=0,p_base,extra=0;
    int respuesta ,turno;
    cout<<("\n\t\t\t--> PAGOS <--\n");
    cout<<("\n Ingrese monto del pago base: ");
    cin>>p_base;
    pago+=p_base;
    cout<<("\n\t\tHORARIO\t\t\tPAGO\n\n");
    cout<<("\t1) 8:00 AM -4:00 PM\t\tPAGO BASE")<<endl;
    cout<<("\t2) 4:00 PM - 8:00 PM \t25 POR CIENTO EXTRA\n");
    cout<<("\t3) 8:00 PM - 12:00 AM\t50 POR CIENTO EXTRA\n");
    cout<<("\t4) 12:00 AM - 8:00 AM\t\tPAGO DOBLE\n\n");
    cout<<("\n Trabajo otro turno?\n");
    cout<<("\n\tSi -> Precione cualquier numero");
    cout<<("\n\tNo -> 0\n");
    cin>>respuesta;

    if (respuesta ==0)
        cout<<("\nUsted no trabajo horas extras...")<<endl;
    else
    {
        cout<<("\n Elija turno: ");
        cin>>turno;
        switch (turno)
    {
        case 1:
            cout<<("\nUsted ya trabajo ese turno ...")<<endl;
            break;
        case 2:
            pago+=p_base*25/100;
            extra=p_base*25/100;
            break;
        case 3:
            pago+=p_base*50/100;
            extra=p_base*50/100;
            break;
        case 4:
            pago+=p_base*2;
            extra=p_base*2;
            break;
        default:
            cout<<("\nValor incorrecto")<<endl;
    }
    if (extra!=0)
        {
            if (extra>p_base )
                cout<<("\nUsted gano mas por sus horas extras que por su horario de oficina")<<endl;
            else if (extra==p_base)
                cout<<("\nUsted gano lo mismo gracias a su sueldo extra")<<endl;
            else
                cout<<("\nUsted gano mas en su horario de oficina que por sus horas extras")<<endl;
        }


    }
    cout<<("\nPAGO BASE:\tS/")<<p_base;
    cout<<("\nPAGO EXTRA:\tS/")<<extra;
    cout<<("\nSUELDO:\t\tS/")<<pago<<endl;

    return 0;
}

-------------------------------------
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    float total;
    int num;
    cout<<("\n\n\t\t\t--> DESCUENTOS <--")<<endl;
    cout<<("\nIntroduzca la cantidad total de la compra : ");
    cin>>total;
    if (total>=100)
    {
        cout<<("\nSus gasto IGUALA o SUPERA los $/100.00 y por tando participa en la promocion")<<endl;
        cout<<("\n\t COLOR\t\tDESCUENTO")<<endl;
        cout<<("\n\t BOLA BLANCA\t\tNo tiene");
        cout<<("\n\t BOLA ROJA\t\t10 POR CIENTO");
        cout<<("\n\t BOLA AZUL\t\t20 POR CIENTO");
        cout<<("\n\t BOLA VERDE\t\t25 POR CIENTO");
        cout<<("\n\t BOLA AMARILLA\t\t50 POR CIENTO")<<endl;
        num = rand() % 5;
        switch(num)
        {
            case 0:
                cout<<("\n Aleatoriamente usted obtuvo una BOLA BLANCA");
                cout<<("\n Usted no accede a ningun descuento");
                break;
            case 1:
                cout<<("\n Aleatoriamente usted obtuvo una BOLA ROJA");
                cout<<("\n FELICIDADES, HA GANADO UN 10 POR CIENTO DE DESCUENTO");
                total-=total*10/100;
                break;
            case 2:
                cout<<("\n Aleatoriamente usted obtuvo una BOLA AZUL");
                cout<<("\n FELICIDADES, HA GANADO UN 20 POR CIENTO DE DESCUENTO");
                total-=total*20/100;
                break;
            case 3:
                cout<<("\n Aleatoriamente usted obtuvo una BOLA VERDE");
                cout<<("\n FELICIDADES, HA GANADO UN 25 POR CIENTO DE DESCUENTO");
                total-=total*25/100;
                break;
            default:
                cout<<("\n Aleatoriamente usted obtuvo una BOLA AMARILLA");
                cout<<("\n FELICIDADES, HA GANADO UN 50 POR CIENTO DE DESCUENTO");
                total-=total*50/100;
        }
    }
    else
        cout<<("\n Cliente no aplica a una promocion");
    cout<<("\n\n SU TOTAL A PAGAR: S/")<<total<<endl;

    return 0;
}
----------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int a,b,c,intermedio,mayor,menor;
    cout<<("\n\n\t--> ORDENAMIENTO DE NUMEROS <--")<<endl;
    cout << ("\nIngrese 3 numeros: ") << endl;
    cin>>a>>b>>c;

    mayor=a;
    menor=a;
    if (a>mayor)
        mayor=a;
    if (b>mayor)
        mayor=b;
    if (c>mayor)
        mayor=c;
    if (a<menor)
        menor=a;
    if (b<menor)
        menor=b;
    if (c<menor)
        menor=c;
    if ((a<=b && a>=c)|| (a<=c && a>=b))
        intermedio=a;

    else
        if( (b<=a && b>=c)||(b<=c && b>=a))
            intermedio=b;
        else
            intermedio=c;
    cout<<("\nLos numeros se han ordenado de la siguiente forma")<<endl;
    cout<<("\nASCENDENTE\tDESCENDENTE")<<endl;
    cout<<menor<<("\t\t")<<mayor<<endl;
    cout<<intermedio<<("\t\t")<<intermedio<<endl;
    cout<<mayor<<("\t\t")<<menor<<endl;

  return 0;
}
----------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int num,c=0;
    cout<<("\n\n\t--> NUMERO DE CIFRAS <--");
    cout<<("\nIngrese un numero: ");
    cin>>num;
    while(num!=0)
    {
        num/=10;
        c+=1;
    }
    cout<<("\nEl numero ingresado tiene: ")<<c<<(" cifras")<<endl;
    return 0;
}
-------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<("\n\n\t--> AUMENTA CEROS <--");
    cout<<("\nIngrese un numero: ");
    cin>>num;
    if (num>=0 && num<10000)
    {
        if (num <10)
            cout<<("000")<<num;
        else if (num <100)
            cout<<("00")<<num;
        else if (num <1000)
            cout<<("0")<<num;
        else
            cout<<num;
    }
    else
        cout<<("\nValor incorrecto");
    return 0;
}
