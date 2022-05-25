#include<stdio.h>
void readIntArray(int a[], int l){
     int *p = a;
       for(int i=0; i<l; i++){
           printf("Eingabe der Komponente mit Index %d von a:", i);
           scanf("%d", &a[i]);//p++
       }
}
void printIntArray(int a[], int l){
     for(int i=0; i<l; i++){
     printf("\n a[%d]= %d",i, a[i]);
     }
}
int main (void){
   int i;
   printf("die Anzahl der ganzzahlige Werte:");
   scanf("%d",&i);
   int a[i];
   readIntArray(a,i);
   printIntArray(a,i);
   int max=a[0], min=a[0],sum=0;
   double mean;
     for(int j=0; j<i-1; j++){
        if(max < a[j+1]){
           max = a[j+1];
       }
     }
     for(int j=0; j<i-1; j++){
        if(min > a[j+1])  min = a[j+1];
     }
     for(int j=0; j<i; j++){
        sum=sum+a[j];
     }
   mean = (sum*100+0.5)/i;
   printf("\nMinimum der Reihungselemente: %d\nMaximum der Reihungselemente: %d\nderen Mittelwert: %.2lf",min, max, mean/100);
   return 0;
}
