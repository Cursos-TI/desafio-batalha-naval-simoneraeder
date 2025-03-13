#include <stdio.h>

// Desafio Batalha Naval - MateCheck
#define Linhas 10
#define Colunas 10

int main() {
    printf("Tabuleiro da Batalha Naval\n");

    // Criando linha

    char linha [10] = {'A','B','C','D','E','F','G','H','I','J'};

    for (int j = 0; j < 10; j++)
    {
        printf("%c", linha[j]);
    }
    printf("\n");



    // Criando tabuleiro 10x10
   
    int matriz [Linhas] [Colunas] ;
        
    for (int i = 0; i < Linhas; i++){
    for (int j = 0; j < Colunas; j++)
      {
        matriz [i] [j] = 0;      
        printf("%d", matriz[i] [j] );
   }
   
   printf("\n");

    }

    //criando vetor

    int numeros[3] = {3, 3, 3}; 


    for(int i = 0; i < 3; i++) {
        printf("%d\n", numeros[i]);
    }



    return 0;
}
