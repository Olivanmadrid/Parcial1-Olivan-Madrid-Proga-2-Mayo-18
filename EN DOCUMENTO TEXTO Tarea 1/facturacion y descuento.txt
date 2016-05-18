#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
                                   /*cl1-cliente
                                   precioun-precio unitario, subt-subtotal*/
int main()

{
    float cl1,cproducto, preciouni,tot;

    cout<<"              Ferreteria ´BICIRET´"<<"\n"<< "             Precios bajos SIEMPRE!"<< endl;
    cout << "         Recuerde atender al Cliente con amabilidad" <<"\n"<<"\n"<< endl;

  {
      cout<<"Tipo de cliente (1,2 o 3) :  ";
    cin>>cl1;
  }{
if ((cl1>0) && (cl1<2))
{
    cout<<"Consumidor Final"<<endl;
}
 else if ((cl1>1) && (cl1<3))
{
    cout<<"Cliente Frecuente"<<endl;
}
else if ((cl1>2) and (cl1<4))
{
    cout<<"Tercera Edad"<<endl;
}
   else if ((cl1<=0) or (cl1>=4))
   {
       cout<<"Valores no Permitidos inicie nuevamente"<<endl;
cout<<"Recuerde Seleccionar Clientes del 1 al 3"<<"\n";
}


}





if ((cl1>0) && (cl1<4)){


{

  cout<< "Cantidad de Producto : "<<endl;
        cin>>cproducto;


    cout<<"Precio unitario : Lps. ";
cin>>preciouni;

 (tot=(cproducto*=preciouni));}

cout<<"Subtotal antes de descuento : Lps."<<tot<<endl;
if ((cl1>0) && (cl1<2))
{
    cout<<"Descuento 7%: Lps."<< ((tot*0.07))<<endl;
    cout<<"TOTAL: Lps."<<(tot-((tot*0.07)))<<endl;

} else if ((cl1>1) && (cl1<3))
{  cout<<"Descuento 8%: Lps."<< ((tot*0.08))<<endl;
    cout<<"TOTAL: Lps."<<(tot-((tot*0.08)))<<endl;
}
else if ((cl1>2) and (cl1<4))
{ cout<<"Descuento 10%: Lps."<< ((tot*0.1))<<endl;
    cout<<"TOTAL: Lps."<<(tot-((tot*0.1)))<<endl;

}
 cout<<"                       ¡Muchas Gracias Por su Compra!"<<endl;
 cout<<"               La Factura es Beneficio de todos.¡Exijala!"<<endl;



}



    return 0;
}
