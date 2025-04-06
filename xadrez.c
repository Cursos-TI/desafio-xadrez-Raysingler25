#include <stdio.h>

// Função recursiva para mover a torre
void moverTorre(int passo) {
    if (passo == 0) return;
    printf("Direita \n");
    moverTorre(passo - 1);
}

// Função recursiva para mover o bispo
void moverBispo(int passo) {
    if (passo == 0) return;
    printf("Cima, Direita \n");
    moverBispo(passo - 1);
}

// Função recursiva para mover a rainha
void moverRainha(int passo, int limite) {
    if (passo == limite) return;
    printf("Esquerda \n");
    moverRainha(passo + 1, limite);
}

// Função recursiva para mover o cavalo
void moverCavaloBaixo(int passo) {
    if (passo == 0) return;
    printf("Baixo \n");
    moverCavaloBaixo(passo - 1);
}

void moverCavaloEsquerda(int passo) {
    if (passo == 0) return;
    printf("Esquerda \n");
    moverCavaloEsquerda(passo - 1);
}

int main() {
    printf("Movimento Torre: \n");
    moverTorre(5);

    printf("\n");
    printf("***Movimento Bispo*** \n");
    moverBispo(5);

    printf("\n");
    printf("***Movimento Rainha*** \n");
    moverRainha(0, 8);

    printf("\n");
    printf("\n");

    printf("***Movimento Cavalo***\n");
    moverCavaloBaixo(2);
    moverCavaloEsquerda(1);

    return 0;
}
