#include <stdio.h>

 int main() {
    
        char codigocidade;
        float populacao, area, pib;
        int pontosturisticos;
        char nome[100];
        float densidade;
        float pib_per_capita;

        char codigocidade1;
        float populacao1, area1, pib1;
        int pontosturisticos1;
        char nome1[100];
        float densidade1;
        float pib_per_capita1;
    
   
        printf("Dados Primeira Carta \n");

        printf("Informe o Código da Cidade: \n");
        scanf(" %s", &codigocidade);

        printf("Informe o Nome da Cidade: \n");
        scanf(" %s", nome);

        printf("Informe a Populaçâo: \n");
        scanf("%f", &populacao);

        printf("Informe a Área: \n");
        scanf("%f", &area);

        printf("Informe o PIB: \n");
        scanf("%f", &pib);

        printf("Informeo o Número de Pontos Turíscos: \n");
        scanf("%d", &pontosturisticos);

       



        printf("Dados Segunda Carta \n");

        printf("Informe o Código da Cidade: \n");
        scanf(" %s", &codigocidade1);

        printf("Informe o Nome da Cidade: \n");
        scanf(" %s", nome1);

        printf("Informe a Populaçâo: \n");
        scanf("%f", &populacao1);

        printf("Informe a Área: \n");
        scanf("%f", &area1);

        printf("Informe o PIB: \n");
        scanf("%f", &pib1);

        printf("Informeo o Número de Pontos Turíscos: \n");
        scanf("%d", &pontosturisticos1);

       

    
   
        printf("Primeira carta: \n");
        printf("Nome da Cidade: %s \n", nome);
        printf("População: %f \n", populacao);
        printf("PIB: %f \n", pib);
        printf("Área: %f \n", area);
        printf("Pontos Turisticos: %d \n", pontosturisticos);
        densidade = populacao / area;
        printf("Densidade é: %.2f \n", densidade);
        pib_per_capita = pib / populacao;
        printf("PIB per capita é: %.2f \n", pib_per_capita);

        printf("Segunda Carta: \n");
        printf("Nome da Cidade: %s \n", nome1);
        printf("População: %f \n", populacao1);
        printf("PIB: %f \n", pib1);
        printf("Área: %f \n", area1);
        printf("Pontos Turisticos: %d \n", pontosturisticos1);
        densidade1 = populacao1 / area1;
        printf("Densidade é: %.2f \n", densidade1);
        pib_per_capita1 = pib1 / populacao1;
        printf("PIB per capita é: %.2f \n", pib_per_capita1);

     
        



    return 0;
}