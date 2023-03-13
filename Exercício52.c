int main() {
    float investimento1, investimento2, investimento3, premio, total_investido, ganho1, ganho2, ganho3;
    
    // Lendo os valores investidos e o valor do prêmio
    printf("Digite o valor investido pelo primeiro amigo: ");
    scanf("%f", &investimento1);
    printf("Digite o valor investido pelo segundo amigo: ");
    scanf("%f", &investimento2);
    printf("Digite o valor investido pelo terceiro amigo: ");
    scanf("%f", &investimento3);
    printf("Digite o valor do premio: ");
    scanf("%f", &premio);
    
    // Calculando o total investido
    total_investido = investimento1 + investimento2 + investimento3;
    
    // Calculando quanto cada um ganharia proporcionalmente
    ganho1 = premio * (investimento1 / total_investido);
    ganho2 = premio * (investimento2 / total_investido);
    ganho3 = premio * (investimento3 / total_investido);
    
    // Imprimindo o resultado
    printf("O primeiro amigo ganharia R$ %.2f\n", ganho1);
    printf("O segundo amigo ganharia R$ %.2f\n", ganho2);
    printf("O terceiro amigo ganharia R$ %.2f\n", ganho3);
    
    return 0;
}
