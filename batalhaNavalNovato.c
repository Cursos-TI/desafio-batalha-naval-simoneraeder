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
        printf("%c\t", linha[j]);
       
    }
    printf("\n");


    // Criando tabuleiro 10x10
   
    int matriz [Linhas] [Colunas] ;
        
    for (int i = 0; i < Linhas; i++)
    {  printf("%2d ", i+1); 
    for (int j = 0; j < Colunas; j++)
      {
        matriz [i] [j] = 0;    
        
        printf("%d\t", matriz[i] [j] );
        
   }
  
   printf("\n");

    }

// posicionando um navio de tamanho 3 horizontalmente

int Linha = 2;   // Linha de início do navio
int Coluna = 3;  // Coluna de início do navio
int tamanho = 3; // Tamanho do navio
int i; //para o loop


// Preencher o navio horizontalmente
for (i = 0; i < tamanho; i++) {
    matriz[Linha][Coluna + i] = 3;
}

// posicionando um navio de tamanho 3 verticalmente

int linha = 2;   // Linha de início do navio
int coluna = 3;  // Coluna de início do navio
int tamanho = 3; // Tamanho do navio
int i;
// Preencher o navio verticalmente
for (i = 0; i < tamanho; i++) {
    matriz [linha + i][coluna] = 3;
   
}



    return 0;
}

