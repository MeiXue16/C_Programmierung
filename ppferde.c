#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Pferderennen(int N){
    int a[N][N*N];
    for (int i=0; i<N*N; i++){
            for(int j=0; j<N; j++){
                    a[j][i]=0;
            }
    }
    srand((int)time(NULL));// Zufallszahlengenerator initialisieren
    int c = sizeof(a[0])/sizeof(int);
    int b[3][c], *p1, *p2, *p3;
    for(int i=0; i<c ; i++){
       for(int j=0; j<3; j++){
            b[j][i]=0;
        }
    }
    for(int j=0; j<c ; j++){
        if(b[0][j] <10){
            for(int i=0; i<3; i++){
                int z = rand() % N + 1; //1~N
                a[z-1][j+1] = a[z-1][j] + 1;
            }
               for(int i=0; i<N; i++){
                   if(b[0][j] <= a[i][j]){
                        b[0][j] = a[i][j];
                        p1 = &a[i][j];
                   }
            }
            for(int i=0; i<N; i++){
                if(b[1][j] <= a[i][j] && &a[i][j] != p1){
                    b[1][j] = a[i][j];
                    p2 = &a[i][j];
                }
            }
            for(int i=0; i<N; i++){
                if(b[2][j] <= a[i][j] && &a[i][j] != p1 && &a[i][j] != p2){
                    b[2][j] = a[i][j];
                    p3 = &a[i][j];
                }
            }
        }
    else break;
    }
    return b[3][c];
}

int main (void){
   int N;
   printf("die Anzahl der Pferde:");
   scanf("%d",&N);
   if(N <=3) printf("Die Anzahl der Pferde muss groesser als 3 sein!!\n");
   else{
        int b[3][N*N];
        b[3][N*N] = Pferderennen(N);
        printf("fortlaufend die ersten drei in Fuehrung liegenden Pferde:\n");
        printf("%d", b);
   }
   return 0;
}
