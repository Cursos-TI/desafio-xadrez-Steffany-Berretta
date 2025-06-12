#include <stdio.h>

int main() {
    // Constantes para o número de movimentos de cada peça
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8;

    // Movimento da Torre com loop FOR
    printf("\nMovimento da Torre - Direita:\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo com loop WHILE (Diagonal superior direita)
    printf("\nMovimento do Bispo - Diagonal Superior Direita:\n");
    int i = 0;
    while (i < movimentosBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da Rainha com loop DO-WHILE (Esquerda)
    printf("\nMovimento da Rainha - Esquerda:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < movimentosRainha);

    return 0;
}
