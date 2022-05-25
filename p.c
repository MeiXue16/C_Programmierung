#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void){
    int s1=0,i=0;
    int a[7]={0};
int z=0;
 srand((int) time(NULL));
        while(i<3){

            // Zufallszahlengenerator initialisieren
          z = rand() % 7 ;
          a[z] = a[z] + 1;
          i+=1;
        }

        printf("%d\n%d\n%d\n%d\n%d\n%d\n%d",a[0],a[1],a[2],a[4],a[5],a[6]);
        }
