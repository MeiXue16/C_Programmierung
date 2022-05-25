#include<stdio.h>
#include<math.h>
int main(void){
 float k = 0, p = 0;
for(int n=0; 1/k > 1e-6; n++ ){
 k= 2*n+1;
  if(n%2 == 0)  p = p + 1/k;
     else       p = p - 1/k;
      }
printf("der berechneten Wert: %.6f\nFehler: %.6f,", 4*p, M_PI-4*p );
return 0;}
