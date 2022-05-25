#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"
void klammerung(char word[], int length){
    char result[length];
    for(int i =0; result[i] != '\0'; i++){
        result[i] = ' ';
    }
    int k;
    stack s = createStack(10);
    for(int i = 0; word[i] != '\0'; i++){
        char c = word[i];
        switch(c){
            case '(':
            case '[':
            case '{':
                push(s,c);
                k = i;
                break;
            case ')':
            case ']':
            case '}':
                if(!isEmpty(s)){
                    char popc = pop(s);
                    if((c == ')' && popc != '(') || (c == ']' && popc != '[') || (c == '}' && popc != '{')){
                            result[i] = '^';
                        printf("fehlerhafte Klammerung:\n%s\n%s\n",word, result);
                    }
                }
                else{
                   result[i] = '^';
                   printf("fehlerhafte Klammerung:\n%s\n%s\n",word, result);
                }
                break;
        }
    }
    if(!isEmpty(s)){
        result[k] = '^';
        printf("fehlerhafte Klammerung:\n%s\n%s\n",word, result);
    }
    else
        printf("Klammerungen sind korrekt :)");
}
int main(void){
    printf("enter the words:");
    char word[100];
    scanf("%s",word);
    int length ;
    for(int i=0; word[i] != '\0'; i++){
        length = i+2;
    }
    klammerung(word, length);
    return -1;
}
