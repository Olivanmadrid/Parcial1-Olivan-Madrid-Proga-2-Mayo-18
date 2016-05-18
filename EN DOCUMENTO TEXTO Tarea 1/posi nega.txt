#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
float x;  /* se utiliza float y no int por que float incluye decimales */
{cout<<"ingrese numero:";
cin>>x;
}
if(x>0)
{cout<<"es positivo"<<endl;
}else if(x<0)
{cout<<"es negativo"<<endl;
}else
{cout<<"es cero"<<endl;
}system("pause");
return 0;
}
