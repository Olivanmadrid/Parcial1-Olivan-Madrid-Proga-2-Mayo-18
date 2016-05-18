#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{int numero;
    cout << "Ingrese Numero del 1-7..";
    cin>>numero;
if ((numero>=1) && (numero<=1))
{
    cout<<"Domingo";

}
if  ((numero>=2) && (numero<=2))

{
  cout<<"Lunes";

}
if  ((numero>=3) && (numero<=3))

{
  cout<<"Martes";

}
if  ((numero>=4) && (numero<=4))

{
  cout<<"Miercoles";

}
if  ((numero>=5) && (numero<=5))

{
  cout<<"Jueves";

}
if  ((numero>=6) && (numero<=6))

{
  cout<<"Viernes";

}
if ((numero>=7) and (numero<=7))
{
    cout<<"Sabado";
}
else if (numero>=8)
{
    cout<<"Digite Solo numeros del 1-7";
}

    return 0;
}
