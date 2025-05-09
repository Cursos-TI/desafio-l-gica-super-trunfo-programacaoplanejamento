#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Atributos fixos (pode trocar por rand() se quiser aleatorizar)
    int forca1 = 80, velocidade1 = 70, inteligencia1 = 90;
    int forca2 = 75, velocidade2 = 75, inteligencia2 = 85;

    int resultado1 = 0, resultado2 = 0;
    char atributo1, atributo2;

    printf("=== SUPER TRUNFO - COMPARAÇÃO DE DOIS ATRIBUTOS ===\n");

    // Mostra atributos das cartas (para facilitar visualização)
    printf("\nCarta 1: Força = %d, Velocidade = %d, Inteligência = %d\n", forca1, velocidade1, inteligencia1);
    printf("Carta 2: Força = %d, Velocidade = %d, Inteligência = %d\n\n", forca2, velocidade2, inteligencia2);

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("F. Força\nV. Velocidade\nI. Inteligência\n");
    printf("Opção: ");
    scanf(" %c", &atributo1);

    switch (atributo1) {
        case 'F':
        case 'f':
            resultado1 = (forca1 > forca2) ? 1 : (forca1 == forca2 ? 2 : 0);
            break;
        case 'V':
        case 'v':
            resultado1 = (velocidade1 > velocidade2) ? 1 : (velocidade1 == velocidade2 ? 2 : 0);
            break;
        case 'I':
        case 'i':
            resultado1 = (inteligencia1 > inteligencia2) ? 1 : (inteligencia1 == inteligencia2 ? 2 : 0);
            break;
        default:
            printf("Opção inválida. Encerrando o jogo.\n");
            return 0;
    }

    // Escolha do segundo atributo
    printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
    printf("F. Força\nV. Velocidade\nI. Inteligência\n");
    printf("Opção: ");
    scanf(" %c", &atributo2);

    // Verifica se o segundo atributo é o mesmo do primeiro
    if ((atributo1 == atributo2) || (atributo1 + 32 == atributo2) || (atributo1 - 32 == atributo2)) {
        printf("Você escolheu o mesmo atributo duas vezes! Encerrando...\n");
        return 0;
    }

    switch (atributo2) {
        case 'F':
        case 'f':
            resultado2 = (forca1 > forca2) ? 1 : (forca1 == forca2 ? 2 : 0);
            break;
        case 'V':
        case 'v':
            resultado2 = (velocidade1 > velocidade2) ? 1 : (velocidade1 == velocidade2 ? 2 : 0);
            break;
        case 'I':
        case 'i':
            resultado2 = (inteligencia1 > inteligencia2) ? 1 : (inteligencia1 == inteligencia2 ? 2 : 0);
            break;
        default:
            printf("Opção inválida. Encerrando o jogo.\n");
            return 0;
    }

    // Exibe resultados
    printf("\n=== RESULTADO DAS COMPARAÇÕES ===\n");

    if (resultado1 == 1 && resultado2 == 1) {
        printf("Parabéns, você venceu nos dois atributos!\n");
    } else if ((resultado1 == 1 && resultado2 == 2) || (resultado1 == 2 && resultado2 == 1)) {
        printf("Você venceu um atributo e empatou no outro!\n");
    } else if (resultado1 == 2 && resultado2 == 2) {
        printf("Empate nos dois atributos!\n");
    } else if (resultado1 == 1 || resultado2 == 1) {
        printf("Você venceu um, mas perdeu o outro.\n");
    } else {
        printf("Infelizmente, você perdeu nos dois atributos.\n");
    }

    return 0;
}