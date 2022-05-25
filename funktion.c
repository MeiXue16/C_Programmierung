#include<stdio.h>
#include<math.h>
float f1(float x, float y){
  float a;
    if (x!=y) {
       a= (x+y)/(x-y);
       printf("f1(x,y)= %.2f\n",a);}
}
float f2(float x, float y){
  float b;
  b= sqrt(x*x+y*y);
printf("f2(x,y)= %.2f ",b);
}
int main(void){
 float x,y;
 printf("die Werte von x und y: ");
 scanf("%f %f",&x,&y);
f1(x,y);
f2(x,y);
return 0;
}
