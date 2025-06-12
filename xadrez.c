#include <stdio.h>

// Este programa simula os movimentos de peças de xadrez usando loops.
// Nível Novato: Torre, Bispo, Rainha
// Nível Aventureiro: Cavalo (movimento em L usando loops aninhados)

int main() {
    // Constantes de movimento
    const int movimento_torre = 5;
    const int movimento_bispo = 5;
    const int movimento_rainha = 8;

    printf("\nMovimento da Torre - Direita:\n");
    for (int i = 0; i < movimento_torre; i++) {
        printf("Direita\n");
    }

    printf("\nMovimento do Bispo - Diagonal Superior Direita:\n");
    int contador_bispo = 0;
    while (contador_bispo < movimento_bispo) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    printf("\nMovimento da Rainha - Esquerda:\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < movimento_rainha);

    // Nível Aventureiro - Movimento do Cavalo em L
    // O cavalo se move em L: duas casas numa direção e uma perpendicular
    // Simularemos 4 movimentos diferentes para baixo e esquerda

    printf("\nMovimento do Cavalo - L para Baixo e Esquerda:\n");

    for (int i = 0; i < 2; i++) { // movimento para baixo (2 casas)
        printf("Baixo\n");
    }

    int l = 0;
    while (l < 1) { // movimento para esquerda (1 casa)
        printf("Esquerda\n");
        l++;
    }

    printf("\nOutro movimento em L do Cavalo - com loops aninhados:\n");
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
        for (int j = 0; j < 1; j++) {
            printf("Esquerda\n");
        }
    }

    return 0;
}
