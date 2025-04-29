#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Países!\n");
    
    // Declaração de variáveis para as cartas
    char estado1[3], codigo1[4], nomeCidade1[50], cidadeVencedora[50];
    unsigned long int populacao1;
    float area1, pib1, densidadePop1, pibPerCapita1;
    int pontosTuristicos1;

    char estado2[3], codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidadePop2, pibPerCapita2;
    int pontosTuristicos2;

    // Entrada de dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (UF): ");
    scanf("%s", estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em milhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (UF): ");
    scanf("%s", estado2);
    printf("Código da Carta (ex: B01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em milhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos para as cartas
    densidadePop1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    densidadePop2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Comparação de Cartas (Atributo: População)
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf(cidadeVencedora, nomeCidade1); // Definição da cidade vencedora
        printf("Resultado: Carta 1 (%s) venceu!\n", cidadeVencedora);
    } else if (populacao2 > populacao1) {
        printf(cidadeVencedora, nomeCidade2); // Definição da cidade vencedora
        printf("Resultado: Carta 2 (%s) venceu!\n", cidadeVencedora);
    } else {
        printf(cidadeVencedora, "Empate"); // Em caso de empate
        printf("Resultado: Empate!\n");
    }

    printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}