#include <stdio.h>

// ======================
// TORRE (recursivo)
// ======================
void torre(int casas) {
    if (casas == 0) return;

    printf("Direita\n");
    torre(casas - 1);
}

// ======================
// RAINHA (recursivo)
// ======================
void rainha(int casas) {
    if (casas == 0) return;

    printf("Esquerda\n");
    rainha(casas - 1);
}

// ======================
// BISPO (recursivo + loop)
// ======================
void bispo(int casas) {
    if (casas == 0) return;

    int i;
    for (i = 0; i < 1; i++) {
        printf("Cima Direita\n");
    }

    bispo(casas - 1);
}

int main() {

    // ======================
    // TORRE
    // ======================
    printf("Movimento da Torre:\n");
    torre(5);

    // ======================
    // BISPO
    // ======================
    printf("\nMovimento do Bispo:\n");
    bispo(5);

    // ======================
    // RAINHA
    // ======================
    printf("\nMovimento da Rainha:\n");
    rainha(8);

    // ======================
    // CAVALO (loop complexo)
    // ======================
    printf("\nMovimento do Cavalo:\n");

    int i, j;

    for (i = 0; i < 3; i++) {

        if (i < 2) {
            printf("Cima\n");
            continue;
        }

        for (j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }

    return 0;
}