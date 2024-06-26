#include<stdio.h>
int main()
{
    float x;
    scanf("%f", &x);
    if(x>0 && x<=400.00){
        printf("Novo salario: %0.2f\n", x+(x*15)/100);
        printf("Reajuste ganho: %0.2f\n",(x*15)/100);
        printf("Em percentual: 15 %%\n");
    }else if(x>=400.01 && x<=800.00){
        printf("Novo salario: %0.2f\n", x+(x*12)/100);
        printf("Reajuste ganho: %0.2f\n",(x*12)/100);
        printf("Em percentual: 12 %%\n");
    }else if(x>=800.01 && x<=1200.00){
        printf("Novo salario: %0.2f\n", x+(x*10)/100);
        printf("Reajuste ganho: %0.2f\n",(x*10)/100);
        printf("Em percentual: 10 %%\n");
    }else if(x>=1200.01 && x<=2000.00){
        printf("Novo salario: %0.2f\n", x+(x*7)/100);
        printf("Reajuste ganho: %0.2f\n",(x*7)/100);
        printf("Em percentual: 7 %%\n");
    }else if(x>2000.00){
        printf("Novo salario: %0.2f\n", x+(x*4)/100);
        printf("Reajuste ganho: %0.2f\n",(x*4)/100);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
/*0 - 400.00
400.01 - 800.00
800.01 - 1200.00
1200.01 - 2000.00
Above 2000.00

15%
12%
10%
7%
4%

Novo salario: 460.00
Reajuste ganho: 60.00
Em percentual: 15 %*/
