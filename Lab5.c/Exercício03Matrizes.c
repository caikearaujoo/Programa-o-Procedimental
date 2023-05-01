#include <stdio.h>

int main() {
  int matriz[4][4];
  int maior_valor = matriz[0][0];
  int linha_maior, coluna_maior;

  printf("Digite os valores que deseja colocar na matriz 4x4:\n");
  for(int i = 0; i < 4; i++) 
  {
    for(int j = 0; j < 4; j++) 
    {
      scanf("%d", &matriz[i][j]);
      if(matriz[i][j] > maior_valor) 
      { 
        maior_valor = matriz[i][j];
        linha_maior = i;
        coluna_maior = j;
      }
    }
  }

  printf("Matriz lida:\n");
  for(int i = 0; i < 4; i++) 
  {
    for(int j = 0; j < 4; j++) 
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("Maior valor encontrado: %d\n", maior_valor);
  printf("Localizacao: linha %d, coluna %d\n", linha_maior, coluna_maior);

  return 0;
}
