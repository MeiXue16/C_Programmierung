#include<stdio.h>
int linearSearch(int n, int a[], int l){
    int pos = l-1;
    while(pos >= 0 && a[pos] != n) pos--;
    return pos;
}
int binarySearch(int n, int *a, int l){
    int pos;
    if (l%2 == 0) pos = l/2;
    else pos = (l-1)/2;
    while(pos >=0 && a[pos] != n){
        if(n < a[pos]){
            if(pos%2 == 0) pos = pos/2;
            else pos = (pos-1)/2;
        }
        if(n > a[pos]){
            if((pos+l)%2 == 0) pos = (pos+l)/2;
            else pos = (pos+l-1)/2;
        }
    }
    return pos;
}
int main(void){
    int b[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71, 73,79,83,89,97};
    int l=25;
    int n;
    printf("eine Zahl Eingeben:");
    scanf("%d", &n);
    int p1 = linearSearch(n, b, l);
    int p2 = binarySearch(n, b, l);
    printf("linearSearch: die Position der Zahl: %d\nbinarySearch: die Position der Zahl: %d",p1, p2);
    return 0;
}
