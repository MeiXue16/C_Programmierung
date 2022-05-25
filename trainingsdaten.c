#include<stdio.h>
int main (void){
float a[10000], max1, max2, min, sum, mean, diff;
int count=0;
for(int i=0; i<10000;i++){
scanf("%f",&a[i]);
count += 1 ;
if(a[i]<=0) break;}

printf("Anzahl der Spruenge: %d\n", count-1);

max1=a[0];
for(int i=1;i< count-1; i++){
if(max1 < a[i]) max1=a[i]; }
max2=a[0];
for(int i=1; i< count; i++){
if(max2 < a[i] && a[i]!= max1) max2=a[i]; }
printf("die zwei grossten Weiten: %f, %f\n",max1,max2);

min=a[0];
for(int i=1;i< count-1; i++){
if(min > a[i]) min=a[i]; }
printf("die kleinste Weite: %f\n",min);

sum=0;
for(int i=0; i< count-1; i++){
sum= sum+a[i];}
mean= sum/(count-1);
printf("die mittlere Weite: %f\n", mean);

diff=max1-min;
printf("die Differenz von groesster und kleinster Weite: %f\n",diff);

return 0;
}
