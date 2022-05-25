#include<stdio.h>
#include<math.h>
int binaryToDecimal(unsigned long long int n){
  int a=0,d=0;
   if(n==0) return n;
   if(n>0){
     for(int i=0; n>0; i++ ){
        a= n%10 ;
        d= d+ a* pow(2, i);
        n=n/10;
        }
   return d;
}
}

int main(void){
 unsigned long long int n;
 printf("Eine Binaerzahl geben: ");
 scanf("%lld",&n);
 int x= binaryToDecimal(n);
 printf("zugehoerige Dezimalzahl ist: %d", x);
 return 0;
}
