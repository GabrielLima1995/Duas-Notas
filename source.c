#include<stdio.h>

int main ()
{
    int n,m,diferenca,a,b,c,d,e,f,contador;

    scanf("%d %d",&n,&m);

    while ( n != 0 || m != 0 )
    {
        diferenca = m-n;

        a= diferenca/100;
        b=(diferenca%100)/50;
        c=((diferenca%100)%50)/20;
        d=(((diferenca%100)%50)%20)/10;
        e=((((diferenca%100)%50)%20)%10)/5;
        f=(((((diferenca%100)%50)%20)%10)%5)/2;
        contador=a+b+c+d+e+f;

        if (contador == 2)
            printf("possible\n");
        else
            printf("impossible\n");

        scanf("%d %d",&n,&m);
    }

    return 0;



}
