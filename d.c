#include<stdio.h>
#include<math.h>
int main(void){
int n;
scanf("%d ",&n);
int a,b=0,i=0;
while( n>0 ){
a= n%2 ;
b= b+ a* pow(10, i);
n=n/2;
i+=1;
}
printf("binary:%d",b);
return 0;}
