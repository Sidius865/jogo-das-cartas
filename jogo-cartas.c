#include <stdio.h>

int main(){

        char estado[50], estado2[50];
        char codigo[50], codigo2[50];
        char nome[40], nome2[40];
        unsigned long int populacao, populacao2;
        float area, area2, densidade, densidade2;
        float pib, pib2, pibcapita, pibcapita2;
        int ponto, ponto2;
        float superpoder, superpoder2;
        int resultado, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;


        printf("- Carta 1 \n");

        printf("Nome do estado:\n");
        scanf("%s", &estado);

        printf("Digite o código:\n");
        scanf("%s", &codigo);

        printf("Nome da cidade:\n");
        scanf("%s", &nome);

        printf("Número de habitantes:\n");
        scanf("%d", &populacao);

        printf("Área da cidade: \n");
        scanf("%f", &area);

        printf("Pib da cidade: \n");
        scanf("%f", &pib);

        printf("Pontos Turísticos: \n");
        scanf("%d", &ponto);
        
        densidade = populacao / area;
        pibcapita = pib / populacao;



        printf("- Carta 1\n");
        printf("- Estado: %s \n - Código: %s \n - Nome da Cidade: %s\n", estado, codigo, nome);
        printf("- População: %d \n - Área: %.2f \n - Pib: %.2f \n - Pontos Turísticos: %d\n", populacao, area, pib, ponto);
        printf("- A densidade é: %.2f\n", densidade);
        printf("- O Pib per Capita é: %.2f\n", pibcapita);
        printf("- Carta 2 \n");

        printf("Nome do estado:\n");
        scanf("%s", &estado2);

        printf("Digite o código:\n");
        scanf("%s", &codigo2);

        printf("Nome da cidade:\n");
        scanf("%s", &nome2);

        printf("Número de habitantes:\n");
        scanf("%d", &populacao2);

        printf("Área da cidade: \n");
        scanf("%f", &area2);

        printf("Pib da cidade: \n");
        scanf("%f", &pib2);

        printf("Pontos Turísticos: \n");
        scanf("%d", &ponto2);

        densidade2 = populacao2 / area2;
        pibcapita2 = pib2 / populacao2;


        printf("- Carta 2\n");
        printf("- Estado: %s \n - Código: %s \n - Nome da Cidade: %s\n", estado2, codigo2, nome2);
        printf("- População: %d \n - Área: %.2f \n - Pib: %.2f \n - Pontos Turísticos: %d\n", populacao2, area2, pib2, ponto2);
        printf("- A densidade é: %.2f\n", densidade2);
        printf("- O Pib per Capita é: %.2f\n", pibcapita2);

        superpoder = populacao + area + pib + pibcapita + (1/densidade) + ponto;
        superpoder2 = populacao2 + area2 + pib2 + pibcapita2 + (1/densidade2) + ponto2;

        resultado = populacao > populacao2;
        resultado2 = area > area2;
        resultado3 = pib > pib2;
        resultado4 = pibcapita > pibcapita2;
        resultado5 = (1/densidade) > (1/densidade2);
        resultado6 = ponto > ponto2;
        resultado7 = superpoder > superpoder2; 

        printf("- Cartas 1 e 2\n");
    printf("- Estado 1: %s \tEstado 2: %s \n - Código 1: %s \tCódigo 2: %s \n - Nome da Cidade 1: %s\t Nome da Cidade 2: %s\n",  estado, estado2, codigo, codigo2,nome, nome2);
    printf("- População 1: %d \tPopulação 2: %d \n - Área 1: %.2f \t Área 2: %.2f \n - Pib 1: %.2f \tPib 2: %.2f \n - Pontos Turísticos 1: %d \tPontos Turísticos 2: %d\n", populacao, populacao2, area, area2, pib, pib2, ponto, ponto2);
    printf("- Densidade 1: %.2f \tDensidade 2: %.2f\n", densidade, densidade2);
    printf("- Pib per Capita 1:%.2f \t Pib per Capita 2: %.2f \n", pibcapita, pibcapita2);

        printf("- Comparação das cartas - \n");
        printf("População: %d\n", resultado);
        printf("Área: %d\n", resultado2);
        printf("PIB: %d\n", resultado3);
        printf("Pontos turisticos: %d\n", resultado4);
        printf("Densidade Populacional: %d\n", resultado5);  
        printf("PIB per capita: %d\n", resultado6);
        printf("Super Poder: %d\n", resultado7);


    return 0;
}