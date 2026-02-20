#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char wort[101];
    int Palindrom = 1;
    printf("Geben Sie ein Wort ein:\n");
    scanf("%100s", wort);
    int len = strlen(wort);
    for (int i=0; i<len/2; i++){
        if (tolower(wort[i]) != tolower(wort[len-i-1])){
            Palindrom = 0;
            break;
        }
    }
    switch (Palindrom){
        case 1:
            printf("Das Wort \"%s\" ist ein Palindrom", wort);
        break;
        case 0:
            printf("Das Wort \"%s\" ist kein Palindrom", wort);
        break;
    }
}