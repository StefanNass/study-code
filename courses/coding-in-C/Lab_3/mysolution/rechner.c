#include <stdio.h>
float zahl1;
float zahl2;
char operator;
float ergebnis;

void add (float z1, float z2){
    ergebnis = z1 + z2;
}
void sub (float z1, float z2){
    ergebnis = z1 - z2;
}
void multiply(float z1, float z2){
    ergebnis = z1 * z2;
}
void divide (float z1, float z2){
    ergebnis = z1 / z2;
}

int main(){
    printf("Geben Sie Ihre erste Zahl ein: ");
    scanf("%f", &zahl1);
    printf("Geben Sie Ihre zweite Zahl ein: ");
    scanf("%f", &zahl2);
    printf("Welche Rechenoperation wollen Sie? (Waehlen Sie zwischen +, -, *, /)");
    scanf(" %c", &operator);
    switch (operator){
        case '+':
            add(zahl1, zahl2);
        break;
        case '-':
            sub (zahl1, zahl2);
        break;
        case '*':
            multiply(zahl1, zahl2);
        break;
        case '/':
            if(zahl2 ==0){
                printf("Keine Division durch 0 moeglich!\n");
                return 1;
            }
            divide(zahl1, zahl2);
        break;
        default:
            printf("Ungültige Eingabe des Operators!\n");
            return 1;
    }
    printf("%.2f %c %.2f = %.2f", zahl1, operator, zahl2, ergebnis);
    return 0;
}
