#include<stdio.h>
#include<math.h>
int solve(double a, double b, double c){
    double delta, x1, x2;
    int anzahl;
    delta= b*b-4*a*c;
      if(delta<0)  {
         anzahl=0;
         printf("keine Losung");}
      if(delta==0) {
         anzahl=1;
         x1= -b/(2*a);
         printf("eine Losung x: %lf", x1);}
      if(delta>0) {
         anzahl=2;
         x1= (-b+sqrt(delta))/(2*a);
         x2= (-b-sqrt(delta))/(2*a);
         printf("zwei Losungen x1: %lf x2: %lf", x1, x2);}
}
int main(void){
 double a, b, c;
 scanf("%lf %lf %lf", &a, &b, &c);
 solve(a,b,c);
 return 0;
}
