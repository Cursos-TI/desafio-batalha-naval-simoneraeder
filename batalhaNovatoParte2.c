#include <stdio.h>



// Desafio Batalha Naval - MateCheck


int main() {

  printf("Tabuleiro da Batalha Naval\n");



  // Criando linha



  char linha [10] = {'A','B','C','D','E','F','G','H','I','J'};


  for (int j = 0; j < 10; j++)

  {

    printf("%c\t", linha [j] );

   }

   printf(" \n ");

  

// Criando tabuleiro 10x10



int matriz [10] [10] = {{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,5,5,5,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,5,0,0},{0,0,0,0,0,0,0,5,0,0},{0,0,0,0,0,0,0,5,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}};
    

for (int i = 0; i < 10; i++){
  printf("%2d\t ", i+1);
for (int j = 0; j < 10; j++)
 {
  // criando a linha "navio" "3" , horizontal e vertical.

    if (matriz[i][j] > 4) 
    {
        matriz[i][j] = 3;
    }
    
  printf("%d\t", matriz[i] [j] );

}

printf("\n");

}

return 0;

}