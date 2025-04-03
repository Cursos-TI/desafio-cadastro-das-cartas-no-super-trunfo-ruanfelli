#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[10];
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

void exibirCarta(const Carta *carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %s\n", carta->estado);
    printf("Código: %s\n", carta->codigo);
    printf("Nome da Cidade: %s\n", carta->nomeCidade);
    printf("População: %d\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: %.2f bilhões de reais\n", carta->pib);
    printf("Número de Pontos Turísticos: %d\n", carta->pontosTuristicos);
}

int main() {
    Carta carta1 = {
        "PARAIBA",
        "P01",
        "CAMPINA GRANDE",
        1524369,
        11452.30,
        6652.321,
        63
    };

    Carta carta2 = {
        "PARAIBA",
        "C03",
        "João pessoa",
        99852145,
        1125.003,
        78450.22,
        31
    };

    exibirCarta(&carta1, 1);
    exibirCarta(&carta2, 2);

    return 0;
}






