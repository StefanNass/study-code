#include <stdio.h>
float zahl1;
float zahl2;
char operator;
float ergebnis;
int main(){
    printf("Geben Sie Ihre erste Zahl ein: ");
    scanf("%f", &zahl1);
    printf("Geben Sie Ihre zweite Zahl ein: ");
    scanf("%f", &zahl2);
    printf("Welche Rechenoperation wollen Sie? (Waehlen Sie zwischen +, -, *, /)");
    scanf(" %c", &operator);
    switch (operator){
        case '+':
            ergebnis = zahl1 + zahl2;
        break;
        case '-':
            ergebnis = zahl1 - zahl2;
        break;
        case '*':
            ergebnis = zahl1 * zahl2;
        break;
        case '/':
            if(zahl2 ==0){
                printf("Keine Division durch 0 moeglich!\n");
                return 1;
            }
            ergebnis = zahl1 / zahl2;
        break;
        default:
            printf("Ungültige Eingabe des Operators!\n");
            return 1;
    }
    printf("%.2f %c %.2f = %.2f", zahl1, operator, zahl2, ergebnis);
    return 0;
}