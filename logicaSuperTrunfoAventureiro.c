#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Definição da estrutura para representar as cartas dos países
int main() {
    int pontosTuristicos1,pontosTuristicos2, carta1, carta2, escolha;
    char nomePais1[50],nomePais2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidadeDemografica1, densidadeDemografica2;

       // Entrada de dados para a Carta 1
       printf("Digite os dados da Carta 1:\n");
       printf("País: ");
       scanf("%s", &nomePais1);
       printf("População: ");
       scanf("%lu", &populacao1);
       printf("Área (em km²): ");
       scanf("%f", &area1);
       printf("PIB (em trilhões): ");
       scanf("%f", &pib1);
       printf("Número de Pontos Turísticos: ");
       scanf("%d", &pontosTuristicos1);
       
       // Cálculo da Densidade Demográfica carta 1
      densidadeDemografica1 = populacao1/ area1;
   
       // Entrada de dados para a Carta 2
       printf("Digite os dados da Carta 2:\n");
       printf("País: ");
       scanf("%s", &nomePais2);
       printf("População: ");
       scanf("%lu", &populacao2);
       printf("Área (em km²): ");
       scanf("%f", &area2);
       printf("PIB (em trilhões): ");
       scanf("%f", &pib2);
       printf("Número de Pontos Turísticos: ");
       scanf("%d", &pontosTuristicos2);
       
       // Cálculo da Densidade Demográfica carta 2
      densidadeDemografica2 = populacao2 / area2;
       
         
       // Menu de escolha de atributo
       printf("\nEscolha um atributo para comparar:\n");
       printf("1 - População\n 2 - Área\n 3 - PIB\n4 - Pontos Turísticos\n 5 - Densidade Demográfica\n");
       scanf("%d", &escolha);
   

    switch (escolha) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", nomePais1, populacao1);
            printf("%s: %lu habitantes\n", nomePais2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s!\n", nomePais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s!\n", populacao2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomePais1, area1);
            printf("%s: %.2f km²\n", nomePais2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nomePais1);
            } else if (area2 > area1){
                printf("Vencedor: %s\n", nomePais2);
            } else {
                printf("Empate!\n");
            }    
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f trilhões\n", nomePais1, pib1);
            printf("%s: %.2f trilhões\n", nomePais2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s!\n", nomePais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s!\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos turísticos\n", nomePais1, pontosTuristicos1);
            printf("%s: %d pontos turísticos\n", nomePais2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s!\n", nomePais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s!\n", nomePais2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nomePais1, densidadeDemografica1);
            printf("%s: %.2f hab/km²\n", nomePais2, densidadeDemografica2);
            if (densidadeDemografica1 < densidadeDemografica2);{
            printf("Vencedor: %s!\n", nomePais1);
            break;
        default:
            printf("Opção inválida! Escolha um número de 1 a 5.\n");
            break;
    }
}
 

    return 0;


} 