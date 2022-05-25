#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Pferderennen(int N){
    int a[N]={0}, max,  max2,  max3;
    int s1=0;
    int s2=0;
    int s3=0;
    while(s1 < 10){
        for(int i=0; i < 3; i++){
          srand((int) time(NULL));   // Zufallszahlengenerator initialisieren
          int zufallszahl = rand() % N ;
          a[zufallszahl] = a[zufallszahl] + 1;
        }
        printf("%d\n%d\n%d\n%d\n%d\n%d\n%d",a[0],a[1],a[2],a[4],a[5],a[6]);

        for(int j=0; j < N; j++){
            if(s1 < a[j]){
                s1 = a[j];
                max = j+1;
            }
        }
        for(int i=0; i<N; i++){
             if((s2 < a[i]) && (i+1 != max)){
                s2 = a[i];
                max2 = i+1;
             }
        }
        for(int i=0; i<N; i++){
            if((s3 < a[i]) && (i+1 != max) && (i+1 != max2)){
                 s3 = a[i];
                 max3 = i+1;
            }
        }
        printf("\nfortlaufend die ersten drei in Fuehrung liegenden Pferde\n: p(%d) = %d\np(%d) = %d\np(%d) = %d",max,s1,max2,s2,max3,s3);
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

}
