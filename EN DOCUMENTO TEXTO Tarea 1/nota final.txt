#include <iostream>

using namespace std;

int main()
{int fin;
float exam, num;



    cout << "Ingrese Nota Acumulada" << endl;
    cin>> num;

    cout<< "Ingrese Nota Examen"<< endl;
    cin>> exam;

      fin=(num + exam);

    if ((fin>=57) && (fin<60))
        {
      cout<<"Se aplico redondeo a 57,58,59 a 60"<< "\n"<< "60" <<endl;  /*Aprendi que la parte logica
      de este ejercicio era sencillamente aplicarle el valor de 60 para dicho redondeo.*/
    }
   else if (fin<57)
   {
       cout<<"Reprobado con :"<< "\n" <<fin<<endl;


   }
    else

    {


    cout<<"Nota Final del Parcial  "<< "\n"<<fin;
    }
    return 0;
}
