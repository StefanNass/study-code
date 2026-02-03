#include <stdio.h>


int main(){
    int i = 8;
    char buchstabe[] = "ABCDEFGH";
    while (i>=1){
        int k = 1;
        while(k<=8){
            printf("%c%d   ", buchstabe[k-1], i);
            k++;
        }
        printf("\n");
        i--;
    }
}