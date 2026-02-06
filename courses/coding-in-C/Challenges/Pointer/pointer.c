# include<stdio.h>

int main(){
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int *p1 = &myNumbers[1];
    int *p2 = &myNumbers[4];
    printf("Wert von an myNumbers der zweiten Stelle: %d\n", *p1);
    printf("Wert von myNumbers an der fuenften Stelle: %d\n", *p2);
    printf("Adresse von myNumbers an der zweiten Stelle: %p\n", p1);
    printf("Adresse von myNumbers an der fuenften Stelle: %p\n", p2);
    return 0;
}