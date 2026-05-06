#include <stdio.h>
int main()
{
    int num=150, a;
    int *x;//puntero
    x= &num;//Almacena la direcion de num
    printf("%d %p",num, x);
    return 0;
}
