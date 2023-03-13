
int main() {
    float comprimento, largura, preco_tela, custo;
    
    // Lendo as dimensões do terreno e o preço da tela
    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);
    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);
    printf("Digite o preco do metro de tela (em reais): ");
    scanf("%f", &preco_tela);
    
    // Calculando o custo da tela
    custo = 2 * (comprimento + largura) * preco_tela;
    
    // Imprimindo o resultado
    printf("O custo para cercar o terreno com tela sera de R$ %.2f\n", custo);
    
    return 0;
}
