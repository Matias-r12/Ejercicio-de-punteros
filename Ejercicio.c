#include <stdio.h>
int main()
{
    int num=150, a;
    int *x;//puntero
    x= &num;//Almacena la direcion de num
    a=*x; //contenido de la dirrecion de memoria en x
    printf("\n%d %d %p",num,a, x);
    float pi=3.1415, decimal;
    float *ptrf;//puntero
    ptrf=&pi;//Almacena la direcion de ptrf
    decimal=*ptrf;
    printf("\n%f %f %p",pi,decimal, ptrf);
    char letra='a',caracter;
    char *ptrc; //definicion del puntero
    ptrc=&letra;//puntero que almacena la dirreccion de letra
    caracter=*ptrc;//contenido de la dirrecion de memoria en ptrc
    printf("\n%c %c %p",letra,caracter,ptrc);


    return 0;
}
