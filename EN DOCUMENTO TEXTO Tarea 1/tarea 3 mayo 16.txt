#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
main()
{
int i=1,tabla,num=1;
while (num<=5)
{
    cout<<"Tablas del 1 al 5""\n";
    while (i<=10)
    {
        tabla=num*1;
        cout << num<<"x"<<i<<"="<<tabla<<"\n";
        i++;
    }
    cout<<"\n";
    num++;
    i=1;
}

cout<<"\n";}
