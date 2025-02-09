#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Declaração Variáveis
    int populacao,num_pontosturisticos;
    float pib, area;
    char cod_cidade[4], nome[20];

    // Cadastro das Cartas:
    printf("Código da cidade: ");
    scanf("%3s", cod_cidade);

    printf("Nome da Cidade: ");
    scanf("%19s", nome);

    printf("População Total: ");
    scanf("%d", &populacao);

    printf("Área(m²): ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &num_pontosturisticos);

    // Exibição dos Dados das Cartas:
    printf("\nCód. Carta: %s", cod_cidade);
    printf("\nNome da Cidade: %s", nome);
    printf("\nPopulação Total: %d", populacao);
    printf("\nÁrea Total: %.2f(m²)", area);
    printf("\nPIB: %.2f", pib);
    printf("\nNumero de Pontos Turisticos: %d", num_pontosturisticos);

    return 0;
}

