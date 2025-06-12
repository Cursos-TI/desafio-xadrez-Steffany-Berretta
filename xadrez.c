#include <stdio.h>
#include <string.h>

// Simula movimentos de peças de xadrez
// Torre, Bispo, Rainha com recursividade; Cavalo com loops complexos

// Função recursiva para mover a Torre 5 casas para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover a Rainha 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva e com loops aninhados para mover o Bispo 5 casas na diagonal superior direita
void moverBispo(int linha, int coluna, int max) {
    if (linha >= max) return;
    for (int c = coluna; c < coluna + 1; c++) {
        printf("Cima Direita\n");
    }
    moverBispo(linha + 1, coluna + 1, max);
}

// Movimento complexo do Cavalo: 2 para cima, 1 para a direita com break e continue
void moverCavalo() {
    printf("\nMovimento do Cavalo - Em L (2 Cima, 1 Direita):\n");
    for (int i = 0; i < 3; i++) {
        if (i == 2) {
            for (int j = 0; j < 1; j++) {
                printf("Direita\n");
            }
            break; // encerra o movimento
        }
        if (i == 1) continue; // ignora a segunda iteração como exemplo de uso
        printf("Cima\n");
    }
}

int main() {
    printf("\nMovimento da Torre - Direita (recursivo):\n");
    moverTorre(5);

    printf("\nMovimento do Bispo - Diagonal Superior Direita (recursivo + loop):\n");
    moverBispo(0, 0, 5);

    printf("\nMovimento da Rainha - Esquerda (recursivo):\n");
    moverRainha(8);

    moverCavalo();

    return 0;
}
