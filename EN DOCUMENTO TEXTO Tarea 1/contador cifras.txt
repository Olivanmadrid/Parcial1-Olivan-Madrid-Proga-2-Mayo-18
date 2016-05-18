#include <iostream>

using namespace std;
/* Ingresar un numero de hasta 4 cifras pero puede ingresar uno mator el programa
 debera de escribir cuantas cifras tiene el numero */


int main()
{int numero;

    cout << "Ingresar un Numero";
    cin>> numero;

    if (numero<0)  numero*= (-1);

    if (numero<=9)
        cout<<"Tiene Una Cifra***";
    else if (numero<=99)
        cout<<"Tiene 2 cifras";
    else if (numero<=99)
        cout<<"Tiene 3 cifras";
    else
        cout<<"Tiene cuatro o mas cifras";


    return 0;

}
