#include <stdio.h>

int main() {
    char estado;
    char codigo[8];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos;

    printf("=== Cadastro de Carta Super Trunfo ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome); //ler strings com espaços

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos);

    printf("\n=== Carta Cadastrada ===\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);

    return 0;
}
