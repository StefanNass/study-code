#include <stdio.h>

int main(){
    char buchstabe[] = "ABCDEFGH";
    printf(" ");
    for (int i=0; i<=7; i++){
        printf("   %c", buchstabe[i]);
    }
    printf("\n");

    for (int i=8; i>0; i--){
        printf("  +");
        for(int j=0; j<=7; j++){
            printf("---+");
        }
        printf("\n");

        printf("%d ", i);
        for (int k=0; k<=7; k++){
            if (((i + k) % 2) > 0){
                printf("|###");
            }
            else{
                printf("|   ");
            }
        }
        printf("| %d\n", i);
    }
    printf("  +");
    for(int j=0; j<=7; j++){
        printf("---+");
    }
    printf("\n");
    printf(" ");
    for (int i=0; i<=7; i++){
        printf("   %c", buchstabe[i]);
    }
}