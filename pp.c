#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Pferderennen(int N){
    srand(time(NULL));// Zufallszahlengenerator initialisieren
    int zufallszahl = rand() % N + 1;
    return zufallszahl;
}
int main (void){
   int N;
   printf("die Anzahl der Pferde:");
   scanf("%d",&N);
   if(N <=3) printf("Die Anzahl der Pferde muss groesser als 3 sein!!");
   else{
       int a[N];
       int *end= &a[0]+N;
       for (int *i=a; i!=end; ++i)  *i = 0;
       int z;
       for(int i=0; i<3; i++){
            z = Pferderennen(N);
            a[z-1]=a[z-1]+1;

       printf("p(%d)=%d",z,a[z-1]);}}}
