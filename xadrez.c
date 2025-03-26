#include <stdio.h>

int main(){

    printf("Movimento Torre: \n");
    //mover a torre 5 casas para a direita
    for (int torre = 0; torre < 5; torre++)
    {
        printf("Direita \n"); // Imprime a direção do movimento
    }

    printf("\n");
    printf("Movimento Bispo: \n");
    //mover o Bispo 5 casas na diagonal para cima a direita
    int bispo = 0;
    
    while (bispo < 5)
    {
        printf("Cima, Direita \n"); // Imprime a direção do movimento
        bispo++;
    }

    printf("\n");
    printf("Movimento Rainha: \n");
    //mover a Rainha em 8 casas para a esquerda
    int rainha = 0;

    do
    {
        printf("Esquerda \n"); // Imprime a direção do movimento
        rainha++;
    } while (rainha < 8);
    
    
    
    return 0;
}