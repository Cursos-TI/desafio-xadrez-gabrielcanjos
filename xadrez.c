#include <stdio.h>

int main() {

    int i;

    // ======================
    // TORRE
    // ======================
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // ======================
    // BISPO
    // ======================
    printf("\nMovimento do Bispo:\n");
    i = 0;
    while (i < 5) {
        printf("Cima Direita\n");
        i++;
    }

    // ======================
    // RAINHA
    // ======================
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    // ======================
    // CAVALO (loops aninhados)
    // ======================
    printf("\nMovimento do Cavalo:\n");

    int j;

    for (i = 0; i < 2; i++) { // duas casas para baixo
        printf("Baixo\n");
    }

    j = 0;
    while (j < 1) { // uma casa para esquerda
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
