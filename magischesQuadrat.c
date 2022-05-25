#include<stdio.h>
void magischesQuadrat(int n){
    int a[n][n];
    for(int i=0 ;i < n; i++){
        for(int j=0; j < n; j++){
                a[i][j]=0;
        }
    }
    int k= (n-1)/2;
    a[k+1][k] = 1;
    int p1=k+2, p2=k+1;
    for(int i=1; i < n*n ; i++){
        if(p1 >= n) p1 = 0;
        if(p2 >= n) p2 = 0;
        if(p2 <  0) p2 = n-1;
        while(a[p1][p2] != 0){
                p1 = p1 + 1;
                p2 = p2 - 1;
               if(p1 >= n) p1 = 0;
               if(p2 >= n) p2 = 0;
               if(p2 <  0) p2 = n-1;
        }
        a[p1][p2] = i+1;
        p1 = p1+1;
        p2 = p2+1;
    }
    for(int i=0 ;i < n; i++){
        for(int j=0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int main(void){
    int n;
    printf("eine ungerade positive ganze Zahl geben:");
    scanf("%d", &n);
    printf("magische Quadrat:\n");
    magischesQuadrat(n);
    return 0;
}

