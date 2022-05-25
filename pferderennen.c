#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Pferderennen(int N){
    int a[N];
    int *end= &a[0]+N;
    for (int *i=a; i!=end; ++i)  *i = 0;
    srand((int)time(NULL));// Zufallszahlengenerator initialisieren
    int max=0, max2=0, max3=0, s1=0, s2=0, s3=0;
    while(s1 < 10){

        for(int i=0; i<3; i++){
        int zufallszahl = rand() % N + 1;
        a[zufallszahl-1] = a[zufallszahl-1] + 1;
        }
        for(int j=0; j < N; j++){
            if(s1 <= a[j]){
                s1 = a[j];
                max = j;
            }
        }
        printf("\nfortlaufend die ersten drei in Fuehrung liegenden Pferde:\n");
        printf("max: pferd(%d)=%d\n",1+max,s1);

        for(int i=0; i<N; i++){
             if((s2 <= a[i]) && (i != max)){
                s2 = a[i];
                max2 = i;
             }
        }
         printf("max2: pferd(%d)=%d\n",1+max2,s2);
        for(int i=0; i<N; i++){
            if((s3 <= a[i]) && (i != max) && (i != max2)){
                 s3 = a[i];
                 max3 = i;
            }
        }
         printf("max3: pferd(%d)=%d\n",1+max3,s3);
    }
}
int main (void){
   int N;
   printf("die Anzahl der Pferde:");
   scanf("%d",&N);
   if(N <=3) printf("Die Anzahl der Pferde muss groesser als 3 sein!!");
   else{
       Pferderennen(N);
   }
   return 0;
}
