#include<stdio.h>
#include<math.h>
int main(void){
  float x1,x2,x3,y1,y2,y3,a,b,c,s,F;
  printf("punkte P1: ");
  scanf("%f %f",&x1,&y1);
  printf("punkte P2: ");
  scanf("%f %f",&x2,&y2);
  printf("punkte P3: ");
  scanf("%f %f",&x3,&y3);

  a= pow(pow(x1-x2,2) + pow(y1-y2,2), 0.5);
  b= pow(pow(x1-x3,2) + pow(y1-y3,2), 0.5);
  c= pow(pow(x3-x2,2) + pow(y3-y2,2), 0.5);
  s= (a+b+c)*0.5;
  if((a+b)>c && (a+c)>b && (b+c)>a)
  F= pow(s*(s-a)*(s-b)*(s-c), 0.5);
  else F = 0;
  printf("Flaecheninhalt des Dreiecks: %f", F);
  return 0;}


