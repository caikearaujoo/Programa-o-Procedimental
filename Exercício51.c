#include <stdio.h>
#include <math.h>

int main() {
    float x, y, distancia;
    
    // Lendo as coordenadas x e y
    printf("Digite a coordenada x: ");
    scanf("%f", &x);
    printf("Digite a coordenada y: ");
    scanf("%f", &y);
    
    // Calculando a distância
    distancia = sqrt(x * x + y * y);
    
    // Imprimindo o resultado
    printf("A distancia do ponto (%.2f, %.2f) da origem (0, 0) e %.2f\n", x, y, distancia);
    
    return 0;
