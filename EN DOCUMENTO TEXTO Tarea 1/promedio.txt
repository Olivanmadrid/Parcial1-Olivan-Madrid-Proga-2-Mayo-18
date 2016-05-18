#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{int n1,n2,n3,prom;

    cout << "Ingresar nota 1: " << endl;
    cin>>n1;
     cout << "Ingresar nota 2: " << endl;
    cin>>n2;
     cout << "Ingresar nota 3: " << endl;
    cin>>n3;

    if ((n1>n2) and (n2>n3))
        prom=((n1+n2)/2);
    else if ((n2>n1) and (n3>n1))
        prom=((n2+n3)/2);

        else if ((n1>n2) and (n3>n2))
        prom=((n1+n3)/2);


        cout<<"promedio :"<<prom<<endl;




    return 0;
}
