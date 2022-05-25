#include<stdio.h>
double quadrat(double x){
    return x*x;
}
void wertetabelle(double f, double unter, double ober, double schrittweite){
    f=quadrat(unter);
    for(double i = unter; i <= ober; i+=schrittweite){
         f=quadrat(i);
         printf("%.1lf\n", f);
     }
}
int main(void){
   double x, u, o, s;
   printf("untere Grenz der x:");
   scanf("%lf", &u);
   printf("obere Grenz der x:");
   scanf("%lf", &o);
   printf("schrittweite der x:");
   scanf("%lf", &s);
   printf("Wertetabelle:\n");
   wertetabelle(quadrat(u), u, o, s);
   return 0;
}
