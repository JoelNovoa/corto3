#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


int main() {
    int horas, horasextra, empleados,i;
    float sub, total, afp, ss, renta;

    cout<<"Ingrese el numero de empleados: ";
    cin>>empleados;

    for ( i = 0; i <= empleados; i++)
    {
         
    cout<<"Ingrese las horas trabajadas: ";
    cin>>horas;
    cout<<"Ingrese las horas extra trabajadas: ";
    cin>>horasextra;

    sub=(horasextra*2.50)+(horas*1.75);

        if (sub<500)
       {
           ss=sub*0.04;
           afp=sub*0.065;
           total=sub-ss-afp;
           cout<<"El sueldo neto es: "<<total<<endl;
           cout<<"su descuento de seguro social es: "<<ss<<endl;
           cout<<"Su descuento de AFP "<<afp<<endl;
       }

       if (sub>500)
       {
           ss=sub*0.04;
           afp=sub*0.065;
           renta=sub*0.10;
           total=sub-ss-afp-renta;
           cout<<"El sueldo neto es: "<<total<<endl;
           cout<<"su descuento de seguro social es: "<<ss<<endl;
           cout<<"su descuento de renta es: "<<renta<<endl;
           cout<<"Su descuento de AFP "<<afp<<endl;
       }
               
    }
    
   }



