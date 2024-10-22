#include <stdio.h>

int main() {
    int num1, num2, prodotto = 0, i;
    printf("Inserisci il primo numero intero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &num2);
    for (i = 0; i < num2; i++) {
        prodotto += num1;
    }
    if (num2 < 0) {
        prodotto = -prodotto;
    }
    printf("Il prodotto di %d e %d è: %d\n", num1, num2, prodotto);

    return 0;
}

