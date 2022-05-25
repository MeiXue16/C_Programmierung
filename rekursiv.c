#include<stdio.h>
int fibonacci(int n){
    if(n == 0 || n==1) return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int anzahl( int n, int ziffer){
    int i = (n%10 == ziffer) ? 1:0;
    if(n/10 >0) return i + anzahl(n/10, ziffer);
}

int absteigen(int n){
    if(n/10 == 0) return 1;
    else if(n%10 > (n/10)%10) return 0;
    else return absteigen(n/10);

}
int main (void){
    int f, n, z, a;
    printf("fibonacci: n=");
    scanf("%d",&f);
    printf("fibonacci(%d) = %d\n\n", f, fibonacci(f));

    printf("eine naturliche Zahl n =");
    scanf("%d", &n);
    printf("eine Ziffer z =");
    scanf("%d", &z);
    printf("die Anzahl der Vorkommen der Ziffer = %d\n\n", anzahl(n,z));

    printf("eine naturliche Zahl n =");
    scanf("%d", &a);
    printf("Ob sortiert der Zahl von links nach rechts gelesen absteigend? \nJa = 1. Nein = 0\n  %d",absteigen(a));
    return 0;
}
