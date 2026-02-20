#include <stdio.h>

void changeSecondLetter(char text[]) {
    text[1] = 'c';
}

int main(){
    char satz [] = "Curly bird catches the worm";
    char *p1 = satz;
    printf("Vor der Veraenderung:\n");
    printf("%s\n", satz);
    printf ("%s\n", p1);
    *(p1 + 0) = 'E';
    *(p1 + 1) = 'a';
    printf("Nach der Veraenderung:\n");
    printf("%s\n", p1);
    char text[] = "AAtions speak louder than words";
    changeSecondLetter(text);
    printf(text);


}