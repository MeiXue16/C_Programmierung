#include<stdio.h>
int anzahl( int n, int ziffer){
    int i = (n%10 == ziffer) ? 1:0;
    if(n/10 >0) return i + anzahl(n/10, ziffer);
}
int main (void){
 int f, n, z, a;

    printf("eine naturliche Zahl n =");
    scanf("%d", &n);
    printf("eine Ziffer z =");
    scanf("%d", &z);
    printf("die Anzahl der Vorkommen der Ziffer = %d\n", anzahl(n,z));


}
