#include <stdio.h>
int main()
{
    int num=150, a;
    int *x;//puntero
    x= &num;//Almacena la direcion de num
    a=*x; //contenido de la dirrecion de memoria
    printf("\n%d %d %p",num,a, x);
    float pi=3.1415, decimal;
    float *ptrf;//puntero
    ptrf=&pi;//Almacena la direcion de ptrf
    decimal=*ptrf;
    printf("\n%f %f %p",pi,decimal, ptrf);

    return 0;
}
