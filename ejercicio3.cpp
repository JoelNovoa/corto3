#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int funcionando()
{
    int a;
    cout<<"Ingrese el año que se quiere saber"<< endl;
    cin>>a;
    return a;
}


int main(){

    int b = funcionando();
  

    if(b%4==0 and b%100!=0 or b%400==0) //Condición de bisiesto
      cout << "Bisiesto" << endl;
   else
      cout << "No es bisiesto" << endl;

}
    
    
