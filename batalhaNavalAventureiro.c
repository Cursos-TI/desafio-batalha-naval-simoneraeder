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

    int Linha = 2;   // Linha de início do navio
int Coluna = 3;  // Coluna de início do navio
int tamanho = 3; // Tamanho do navio
int i; //para o loop


// Preencher o navio horizontalmente
for (i = 0; i < tamanho; i++) {
    matriz[Linha][Coluna + i] = 3;
}





    return 0;
}
