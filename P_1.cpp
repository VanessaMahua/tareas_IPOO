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
