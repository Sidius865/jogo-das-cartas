#include <stdio.h>

int main(){

        char estado[50];
        char codigo[50];
        char nome[40];
        int populaçao;
        float area;
        float pib;
        int ponto;
        
        printf("- Carta 1 \n");

        printf("Nome do estado:\n");
        scanf("%s", &estado);

        printf("Digite o código:\n");
        scanf("%s", &codigo);

        printf("Nome da cidade:\n");
        scanf("%s", &nome);

        printf("Número de habitantes:\n");
        scanf("%d", &populaçao);

        printf("Área da cidade: \n");
        scanf("%f", &area);

        printf("Pib da cidade: \n");
        scanf("%f", &pib);

        printf("Pontos Turísticos: \n");
        scanf("%d", &ponto);

        printf("- Carta 1\n");
        printf("- Estado: %s \n - Código: %s \n - Nome da Cidade: %s\n", estado, codigo, nome);
        printf("- População: %d \n - Área: %f \n - Pib: %f \n - Pontos Turísticos: %d\n", populaçao, area, pib, ponto);


        printf("- Carta 2 \n");

        printf("Nome do estado:\n");
        scanf("%s", &estado);

        printf("Digite o código:\n");
        scanf("%s", &codigo);

        printf("Nome da cidade:\n");
        scanf("%s", &nome);

        printf("Número de habitantes:\n");
        scanf("%d", &populaçao);

        printf("Área da cidade: \n");
        scanf("%f", &area);

        printf("Pib da cidade: \n");
        scanf("%f", &pib);

        printf("Pontos Turísticos: \n");
        scanf("%d", &ponto);

        printf("- Carta 2\n");
        printf("- Estado: %s \n - Código: %s \n - Nome da Cidade: %s\n", estado, codigo, nome);
        printf("- População: %d \n - Área: %f \n - Pib: %f \n - Pontos Turísticos: %d", populaçao, area, pib, ponto);

    return 0;
}