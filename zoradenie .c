#include <stdio.h>
void todo(int *a, int *b) {
    int ciselko = *a;
    *a = *b;
    *b = ciselko;
}
void triedicka_odpadu(int *x2, int *y2, int *z2) {
    if (*x2 < *y2) {
        todo(x2, y2);
    }
    if (*x2 < *z2) {
        todo(x2, z2);
    }
    if (*y2 < *z2) {
        todo(y2, z2);
    }
}
int main(void) {
    int x, y, z;
    printf("Napis 3 ciselka pod seba:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    triedicka_odpadu(&x, &y, &z);
    printf("Zoradene od najvacsieho: %d, %d, %d\n", x, y, z);
    
    return 0;
}
