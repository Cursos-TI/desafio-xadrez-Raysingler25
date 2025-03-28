#include <stdio.h>

int main(){

    printf("Movimento Torre: \n");
    //mover a torre 5 casas para a direita
    for (int torre = 0; torre < 5; torre++)
    {
        printf("Direita \n"); // Imprime a direção do movimento
    }

    printf("\n");
    printf("***Movimento Bispo*** \n");
    //mover o Bispo 5 casas na diagonal para cima a direita
    int bispo = 0;
    
    while (bispo < 5)
    {
        printf("Cima, Direita \n"); // Imprime a direção do movimento
        bispo++;
    }

    printf("\n");
    printf("***Movimento Rainha*** \n");
    //mover a Rainha em 8 casas para a esquerda
    int rainha = 0;

    do
    {
        printf("Esquerda \n"); // Imprime a direção do movimento
        rainha++;
    } while (rainha < 8);

    printf("\n");
    printf("\n");

    printf("***Movimento Cavalo***\n");
    for (int cavalo = 0; cavalo < 2; cavalo++)
    {
        printf("Baixo \n"); // Imprime a direção do movimento
    } for (int cavalo = 0; cavalo < 1; cavalo++)
    {
        printf("Esquerda \n");
    }
    
    
    
    
    
    
    return 0;
}