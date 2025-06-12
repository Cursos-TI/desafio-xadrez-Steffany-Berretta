#include <stdio.h>
#include <string.h>

// Simula movimentos de peças de xadrez
// Nível Mestre Interativo com direções e casas personalizadas para todas as peças

// Função recursiva para mover a Torre
// Recebe o número de casas e a direção como argumentos
void moverTorre(int casas, char direcao[]) {
    if (casas == 0) return;
    printf("%s\n", direcao);
    moverTorre(casas - 1, direcao);
}

// Função recursiva para mover a Rainha
// Recebe o número de casas e a direção como argumentos
void moverRainha(int casas, char direcao[]) {
    if (casas == 0) return;
    printf("%s\n", direcao);
    moverRainha(casas - 1, direcao);
}

// Função recursiva com loop aninhado para simular o movimento do Bispo
// A cada chamada, move uma casa na diagonal (linha+1, coluna+1)
void moverBispo(int linha, int coluna, int max, char direcao[]) {
    if (linha >= max) return;
    for (int c = coluna; c < coluna + 1; c++) {
        printf("%s\n", direcao);
    }
    moverBispo(linha + 1, coluna + 1, max, direcao);
}

// Função para simular o movimento do Cavalo com múltiplas variáveis
// O usuário escolhe se o primeiro movimento será 1 ou 2 casas e a direção
void moverCavaloPersonalizado(int primeiro, char dir1[], char dir2[]) {
    printf("\nMovimento do Cavalo - Personalizado:\n");
    for (int i = 0; i < primeiro; i++) {
        printf("%s\n", dir1);
    }
    int segundo = (primeiro == 2) ? 1 : 2;
    for (int i = 0; i < segundo; i++) {
        printf("%s\n", dir2);
    }
}

int main() {
    int escolha, casas, primeiro;
    char direcao[50], dir1[20], dir2[20];

    // Interface principal com o usuário
    printf("Bem-vindo ao simulador de movimentos de peças de xadrez!\n\n");
    printf("Escolha uma peça para mover:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            // Entrada e chamada para mover a Torre
            printf("Quantas casas deseja mover a Torre? ");
            scanf("%d", &casas);
            printf("Digite a direção (Direita ou Esquerda): ");
            scanf("%s", direcao);
            printf("\nMovimento da Torre (%s):\n", direcao);
            moverTorre(casas, direcao);
            break;

        case 2:
            // Entrada e chamada para mover o Bispo
            printf("Quantas casas deseja mover o Bispo? ");
            scanf("%d", &casas);
            printf("Digite a direção (Ex: Cima Direita, Baixo Esquerda): ");
            getchar(); // limpar buffer do teclado
            fgets(direcao, sizeof(direcao), stdin);
            direcao[strcspn(direcao, "\n")] = '\0'; // remove o newline
            printf("\nMovimento do Bispo (%s):\n", direcao);
            moverBispo(0, 0, casas, direcao);
            break;

        case 3:
            // Entrada e chamada para mover a Rainha
            printf("Quantas casas deseja mover a Rainha? ");
            scanf("%d", &casas);
            printf("Digite a direção (Direita, Esquerda, Cima, Baixo): ");
            scanf("%s", direcao);
            printf("\nMovimento da Rainha (%s):\n", direcao);
            moverRainha(casas, direcao);
            break;

        case 4:
            // Entrada e chamada para o movimento do Cavalo com múltiplas direções e repetições
            printf("Quantas vezes deseja realizar o movimento do Cavalo (em L)? ");
            scanf("%d", &casas);
            for (int i = 0; i < casas; i++) {
                printf("\nMovimento %d:\n", i + 1);
                printf("Digite a quantidade do primeiro movimento (1 ou 2): ");
                scanf("%d", &primeiro);
                if (primeiro == 2) {
                    printf("Digite a direção do primeiro movimento (Cima ou Baixo): ");
                    scanf("%s", dir1);
                    printf("Digite a direção do segundo movimento (Direita ou Esquerda): ");
                    scanf("%s", dir2);
                } else if (primeiro == 1) {
                    printf("Digite a direção do primeiro movimento (Direita ou Esquerda): ");
                    scanf("%s", dir1);
                    printf("Digite a direção do segundo movimento (Cima ou Baixo): ");
                    scanf("%s", dir2);
                } else {
                    printf("Valor inválido para movimento. Deve ser 1 ou 2.\n");
                    continue;
                }
                moverCavaloPersonalizado(primeiro, dir1, dir2);
            }
            break;

        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
