# include<stdio.h>

int main(){
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int *p1 = &myNumbers[0];
    printf("Wert von an myNumbers der zweiten Stelle: %d\n", *(p1+1));
    printf("Wert von myNumbers an der fuenften Stelle: %d\n", *(p1+4));
    printf("Adresse von myNumbers an der zweiten Stelle: %p\n", (p1+1));
    printf("Adresse von myNumbers an der fuenften Stelle: %p\n", (p1+4));
    return 0;
}