#include<stdio.h>
double cubic(double x){
    return x*x*x+2.0;
}
void wertetabelle(int n,double a[n]){

    for(int i = 0; i < n; i++){

         double j=a[i];
         printf("%.1lf\n", cubic(j));
     }
}
int main(void){
   int n;
   double a[n];
   printf("Anzahl der x:");
   scanf("%lf",&n);
    for(int i=0;i<n; i++){
       scanf("%lf\n",&a[i]);
    }
   printf("Wertetabelle:\n");
   wertetabelle( n,  a[n]);
   return 0;
}
