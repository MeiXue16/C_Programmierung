#include<stdio.h>
#include<math.h>
int main(void){
int  i, j, u, f, k, n;

for(i=1; i <= 500; i++){
     k = i;
  for(u =0; u<20; u++ ){
     f = 0;

       for (j=0; j<3; j++){
        n = k%10;
        f = f + n*n;
        k = k/10; }

     k = f; }

 if(k == 1){
      printf("%d", i);
    printf("\n");}}

return 0;
}
