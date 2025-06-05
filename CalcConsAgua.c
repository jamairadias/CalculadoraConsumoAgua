#include <stdio.h>

int main(void) {
    float leitura_inicio, leitura_fim, consumo_mensal;
    float limite_consumo = 30000;

    printf("Digite a leitura do hidrometro no inicio do mes: ");
    scanf("%f", &leitura_inicio);

    printf("Digite a leitura do hidrometro no final do mes: ");
    scanf("%f", &leitura_fim);

    consumo_mensal = leitura_fim - leitura_inicio;

    printf("O consumo mensal de agua foi de %.2f metros cubicos.\n", consumo_mensal);


    if (consumo_mensal > limite_consumo) 
        printf("ALERTA: Seu consumo esta alto! Considere economizar agua.\n");
    else 
        printf("Seu consumo esta dentro do padrao.\n");
    
    return 0;
}
