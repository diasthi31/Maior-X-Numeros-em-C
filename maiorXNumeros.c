#include <stdio.h>

int main() {
    int i, numero[100], entrada, maior = 0;

    printf("Deseja digitar quantos números? ");
    scanf("%i", &entrada);
    printf("Digite %i números: ", entrada);

    for (i=0; i<entrada; i++) {
        scanf("%i", &numero[i]);
        if (numero[i] > maior) {
            maior = numero[i];
        }
    }

    printf("O maior número é %i.", maior);

    return 0;
}