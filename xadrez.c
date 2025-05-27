#include <stdio.h>

int main() {

    // TORRE
    // Movimento de 5 casas para a direita
    // Estrutura usada: FOR
    
    printf("Movimento da Torre (FOR):\n");
    
    int casasTorre = 5;

    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // BISPO
    // Movimento: 5 casas na diagonal para cima e à direita
    // Estrutura usada: WHILE
   
    printf("\nMovimento do Bispo (WHILE):\n");
    
    int casasBispo = 5;
    int i = 0;

    while (i < casasBispo) {
        printf("Cima-Direita\n");
        i++;
    }

    // RAINHA 
    // Movimento: 8 casas para a esquerda
    // Estrutura usada: DO-WHILE
    
    printf("\nMovimento da Rainha (DO-WHILE):\n");
    
    int casasRainha = 8;
    int j = 0;

    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    return 0;
}