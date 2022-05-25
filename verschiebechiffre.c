#include<stdio.h>
#include<string.h>
char *encipher(char string[], int key){
    for(int i= 0; string[i] != '\0'; i++){
            if(string[i] >= 'A' && string[i] <= 'Z'){
                string[i] = (string[i]-'A'+key+26)%26 + 'A';
            }
            else if(string[i] >= 'a' && string[i] <= 'z'){
                string[i] = (string[i]-'a'+key+26)%26 + 'z';
            }
    }
    printf("%s",string);
}
char *decipher(char string[], int key){
     for(int i= 0; string[i] != '\0'; i++){
         if(string[i] >= 'A' && string[i] <= 'Z'){
                string[i] = (string[i]-'A'-key+26)%26 + 'A';
            }
            else if(string[i] >= 'a' && string[i] <= 'z'){
                string[i] = (string[i]-'a'-key+26)%26 + 'z';
            }
    }
    printf("%s",string);
}
int main (void){
    char a[] ="YLHOH NDPHQ DOOPDHKOLFK CX GHU XHEHUCHXJXQJ HLQHQ\
    JURVVHQ IHKOHU JHPDFKW CX KDEHQ DOV VLH YRQ GHQ EDHXPHQ KHUXQWHUJHNRPPHQ\
    ZDUHQ XQG HLQLJH VDJWHQ VFKRQ GLH EDHXPH VHLHQ\
    HLQ KROCZHJ JHZHVHQ GLH RCHDQH KDHWWH PDQ QLHPDOV YHUODVVHQ GXHUIHQ";
    int k = -3;
    *encipher(a, k);
    return 0;
}
