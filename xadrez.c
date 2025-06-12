#include <stdio.h>
#include <string.h>

// Simula movimentos de peças de xadrez usando estruturas de repetição
// Nível Novato: Torre, Bispo, Rainha
// Nível Aventureiro: Cavalo com loops aninhados e interação com o usuário

int main() {
    // Constantes de movimento
    const int movimento_torre = 5;
    const int movimento_bispo = 5;
    const int movimento_rainha = 8;

    // Movimento da Torre (for)
    printf("\nMovimento da Torre - Direita:\n");
    for (int i = 0; i < movimento_torre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (while)
    printf("\nMovimento do Bispo - Diagonal Superior Direita:\n");
    int contador_bispo = 0;
    while (contador_bispo < movimento_bispo) {
        printf("Cima Direita\n");
        contador_bispo++;
    }

    // Movimento da Rainha (do-while)
    printf("\nMovimento da Rainha - Esquerda:\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < movimento_rainha);

    // Nível Aventureiro - Movimento do Cavalo com interação do usuário
    printf("\n--- Movimento do Cavalo Personalizado ---\n");

    int movimentos_l = 1;
    for (int m = 0; m < movimentos_l; m++) {
        char direcao1[10], direcao2[10];

        printf("\nDigite a primeira direção (ex: Cima, Baixo): ");
        scanf("%s", direcao1);

        printf("Digite a segunda direção (ex: Direita, Esquerda): ");
        scanf("%s", direcao2);

        printf("\nMovimento do Cavalo - L formado por 2 passos em %s e 1 passo em %s:\n", direcao1, direcao2);

        for (int i = 0; i < 2; i++) {
            printf("%s\n", direcao1);
        }

        int j = 0;
        while (j < 1) {
            printf("%s\n", direcao2);
            j++;
        }
    }

    return 0;
}
