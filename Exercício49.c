#include <stdio.h>
int main() {
    int hora_inicio, min_inicio, seg_inicio, duracao, hora_fim, min_fim, seg_fim;
    
    printf("Digite o horario de inicio (hh:mm:ss): ");
    scanf("%d:%d:%d", &hora_inicio, &min_inicio, &seg_inicio);
    
    printf("Digite a duracao da experiencia em segundos: ");
    scanf("%d", &duracao);
    
    seg_fim = seg_inicio + duracao;
    min_fim = min_inicio + seg_fim / 60;
    seg_fim = seg_fim % 60;
    hora_fim = hora_inicio + min_fim / 60;
    min_fim = min_fim % 60;
    hora_fim = hora_fim % 24;
    
    printf("O horario de termino e: %02d:%02d:%02d\n", hora_fim, min_fim, seg_fim);
    
    return 0;
}
