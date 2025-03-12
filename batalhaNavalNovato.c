#include <stdio.h>

// Desafio Batalha Naval - MateCheck


int main() {
    printf("Tabuleiro da Batalha Naval\n");

    char linha [10] = {'A','B','C','D','E','F','G','H','I','J'};

    for (int j = 0; j < 10; j++)
    {
        printf("%c\n", linha[j]);
    }
    
    // Criando tabuleiro 10x10

    

    int tabuleiro [10] [10];
   
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++)
      {tabuleiro [i] [j] = i + j;
        printf("tabuleiro [%d] [%d] = %d\n", i, j, tabuleiro [i] [j]);
    }
    
}

    return 0;
}
