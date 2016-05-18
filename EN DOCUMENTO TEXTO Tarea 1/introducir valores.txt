#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{int n1,n2,n3;

    cout << "Ingresar nota 1: " << endl;
    cin>>n1;
     cout << "Ingresar nota 2: " << endl;
    cin>>n2;
     cout << "Ingresar nota 3: " << endl;
    cin>>n3;

    if ((n1>n2) and (n2>n3))
       {cout<<"Numero grande:"<<n1<<endl;
        cout<<"Numero medio :"<<n2<<endl;
        cout<<"Numero menor :"<<n3<<endl;}
    else if ((n2>n1) and (n1>n3))
       {cout<<"Numero grande:"<<n2<<endl;
        cout<<"Numero medio :"<<n1<<endl;
        cout<<"Numero menor :"<<n3<<endl;}
    else  ((n3>n2) and (n2>n1));
       {cout<<"Numero grande:"<<n3<<endl;
        cout<<"Numero medio :"<<n2<<endl;
        cout<<"Numero menor :"<<n1<<endl;}




    return 0;
}
