#include <stdio.h>
int main()
{
    int num=150, a;
    int *x;//puntero
    x= &num;//Almacena la direcion de num
    printf("\n%d %p",num, x);
    float pi=3.1415, decimal;
    float *ptrf;
    ptrf=&pi;

    printf("\n%f %p",pi, ptrf);
    return 0;
}
