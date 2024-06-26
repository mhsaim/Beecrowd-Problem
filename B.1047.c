/*#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,m3,m4,fh,fm;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    m3=h1*60 + m1;
    m4=h2*60 + m2;
    if(m4>m3){
    fh=(m4-m3)/60;
    fm=(m4-m3)%60;
    }else if(m3>m4){
    fh=(m3-m4)/60 -1;
    fm=60+(m4-m3)%60;
    }else if(m3==m4){
     fh=24;
     fm=0;
    }
   printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", fh, fm);
    return 0;
}
*/
#include <stdio.h>
int main()
{
    int a, b, c, d;
    int dif;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    dif = ((b*60)+d) - ((a*60)+c);
    if(dif<=0) dif += 24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60, dif%60);
    return 0;
}

/*#include <stdio.h>

int main(){
    double a,b,c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(a >= (b+c) || b >= (a+c) || c >= (a+b))
         printf("NAO FORMA TRIANGULO\n");
    else if(a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b))
           printf("TRIANGULO RETANGULO\n");
    else if(a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b))
           printf("TRIANGULO OBTUSANGULO\n");
    else if(a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b))
           printf("TRIANGULO ACUTANGULO\n");
    if(a == b && a == c)
            printf("TRIANGULO EQUILATERO\n");
    if((a == b && a != c)  || (a == c && a != b) || (b == c && b != a))
            printf("TRIANGULO ISOSCELES\n");

 return 0;

}*/
