#include <stdio.h>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int temp;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            temp = a[i][j];
            a[i][j] = b[i][j];
            b[i][j] = temp;
        }
    }

    printf("Nach dem Tausch \na: %d%d\n   %d%d\nb: %d%d\n   %d%d", a[0][0], a[0][1], a[1][0], a[1][1], b[0][0], b[0][1], b[1][0], b[1][1]);

    return 0;
}