#include <stdio.h>

// Desafio Batalha Naval - MateCheck
#define Linhas 10
#define Colunas 10

int main() {
    printf("Tabuleiro da Batalha Naval\n");

    char linha [10] = {'A','B','C','D','E','F','G','H','I','J'};

    for (int j = 0; j < 10; j++)
    {
        printf("%c\n", linha[j]);
    }
    
    // Criando tabuleiro 10x10
    
    int matriz [Linhas] [Colunas];
    
    for (int i = 0; i < Linhas; i++){
    for (int j = 0; j < Colunas; j++)
      {
        matriz [i][j] = i + j;
        printf("%d", matriz [i] [j]);
      
    printf("\n");
}


    return 0;
}
