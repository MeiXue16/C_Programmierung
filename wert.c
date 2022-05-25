#include<stdio.h>
double cubic(double x){
    return x*x*x+2.0;
}
void wertetabelle( int n, double a[] ){
    for(int i=0; i<n; i++){
        double f=cubic(a[i]);
        printf("%.1lf\n",f);
    }
}
int main(void){
    int n;
    printf("die Anzahl der x-Werte:");
    scanf("%d",&n);
    double a[n];
     for(int i=0; i<n;i++){
       printf("a[%d]=",i);
       scanf("%lf",&a[i]);
     }
   printf("Wertetabelle:\n");
   wertetabelle(n,a);
   }
