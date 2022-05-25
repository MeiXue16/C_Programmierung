#include<stdio.h>
#include<math.h>
int main (){
double ko, p, k,x;
int n;
printf(" Gesamtlaufzeit in Jahren:");
scanf("%d", &n);
printf(" Startkapital:");
scanf("%lf", &ko);
printf(" Zinssatz:");
scanf("%lf", &p);
p = p/100;
for(int i=0; i<=n; i++){
x = pow(1+p,i);
k = ko * x;
printf("%d : %.2lf\n", i, k);}
return 0;
}
