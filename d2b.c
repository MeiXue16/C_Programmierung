#include<stdio.h>
long long int decimalToBinary(int n){
   int a,i=1;
   long long b=0;
    while( n!=0 ){
       a= n%2 ;
       b= b+ a* i;
       n=n/2;
       i*=10;
       }
   return b;
}
int main(void){
  int n;
  printf("Eine Dezimalzahl geben: ");
  scanf("%d",&n);
  long long int x= decimalToBinary(n);
  printf("zugehoerige Binaerzahl ist: %lld", x);
return 0;
}
