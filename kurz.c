#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a , b, n=3;
    printf("Starthaltestelle:");
    scanf(" %d", &a);
    printf("Zielhaltestelle:");
    scanf(" %d", &b);
    if(a>=00 && a<=55 && (a%10== 0 ||1 ||2 ||3 ||4 ||5 )&&b>=00 && b<=55 && (b%10== 0 ||1 ||2 ||3 ||4 ||5 )){
     if(abs(a-b)==1) n=n-1;
    if((a%10<=2 && b%10>=3)|| (a%10>=3 && b%10 <=2))n=n+1;
    if(a%10==5 || b%10==5) n=n+1;
    printf(" %d Euro",n);
    }
return 0;
}
