#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
int n;
{cout<<"Ingrese  Un Numero:";
cin>>n;
}
if(n%2==0) /* Nota: Para dividir utilise  "%" y NO "/"*/
{cout<<"Es Par"<<endl;
}                          /*Tanto "endl" y "\n" despues de cout<<"FACT"<< "000"; generaran espacio*/
else
{cout<<"Es Impar"<<"\n";
}
system("pause");


return 0;
}
