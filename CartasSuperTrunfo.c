//Programa feito com os ensinamentos do tema 1, sem modificadores de dados.
//Como não havia ensinado repetições e algo similar a uma tupla, fiz o cadastro de 2 cartas utilizando
//variaveis com o numero 2. 
#include <stdio.h>
//Biblioteca para usar o system
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Declaração de Variáveis
int pop_carta1,pop_carta2,pt_turcarta1,pt_turcarta2,num_carta1,num_carta2;
char nome_carta1[100], nome_carta2[100], cod_carta1[3], cod_carta2[3];
float area_carta1, area_carta2, pib_carta1, pib_carta2, densidade_carta1, densidade_carta2, pib_percarta1, pib_percarta2;
float superpower_carta1, superpower_carta2;

//Registro Carta 1
void carta1(){
    printf("*** Cadastro Carta 1 ***");

    printf("\nNome da Cidade: ");
    scanf("%[^\n]", nome_carta1);

    printf("Código do estado (A - H): ");
    scanf("%2s", cod_carta1);

    printf("Número da cidade (01 - 04): ");
    scanf("%d", &num_carta1);

    printf("População Total: ");
    scanf("%d", &pop_carta1);

    printf("Área(km²): ");
    scanf("%f", &area_carta1);

    printf("PIB: ");
    scanf("%f", &pib_carta1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pt_turcarta1);   

    densidade_carta1 = pop_carta1/area_carta1;
    pib_percarta1 = pib_carta1/pop_carta1;
    superpower_carta1 = (float)pop_carta1 + area_carta1 + pib_carta1 + densidade_carta1 + pib_percarta1 + (float)pt_turcarta1; 

}

//Registro Carta 2
void carta2(){
    //system limpa o terminal, clear é usado para o linux se fosse windows era ´cls´
    system("clear");
    printf("*** Cadastro Carta 2 ***");

    printf("\nNome da Cidade: ");
    getchar();  // Consome o caractere de nova linha pendente
    scanf("%[^\n]", nome_carta2);


    printf("Código do estado (A - H): ");
    scanf("%2s", cod_carta2);

    printf("Número da cidade (01 - 04): ");
    scanf("%d", &num_carta2);

    printf("População Total: ");
    scanf("%d", &pop_carta2);

    printf("Área(km²): ");
    scanf("%f", &area_carta2);

    printf("PIB: ");
    scanf("%f", &pib_carta2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pt_turcarta2);   

    densidade_carta2 = pop_carta2/area_carta2;
    pib_percarta2 = pib_carta2/pop_carta2;
    superpower_carta2 = (float)pop_carta2 + area_carta2 + pib_carta2 + densidade_carta2 + pib_percarta2 + (float)pt_turcarta2; 


}

//Printa na tela os valores das cartas registradas
void telaprint(){
    system("clear");
    printf("\nCódigo Carta: %s%.2d\n", cod_carta1,num_carta1);
    printf("Nome da Cidade: %s\n", nome_carta1);
    printf("População Total: %d\n", pop_carta1);
    printf("Área Total: %.2f(km²)\n", area_carta1);
    printf("Densidade Populacional: %.2f(hab/km²)\n",densidade_carta1);
    printf("PIB: %.2f reais\n", pib_carta1);
    printf("PIB per Capita: %.2f reais\n", pib_percarta1);
    printf("Numero de Pontos Turisticos: %d", pt_turcarta1);

    printf("\n\nCódigo Carta: %s%.2d\n", cod_carta2,num_carta2);
    printf("Nome da Cidade: %s\n", nome_carta2);
    printf("População Total: %d\n", pop_carta2);
    printf("Área Total: %.2f(km²)\n", area_carta2);
    printf("Densidade Populacional: %.2f(hab/km²)\n",densidade_carta2);
    printf("PIB: %.2f reais\n", pib_carta2);
    printf("PIB per Capita: %.2f reais\n", pib_percarta2);
    printf("Numero de Pontos Turisticos: %d", pt_turcarta2);
}

//Faz a comparação de qual carta é maior!
void comparativo(){
    printf("\n\nComparativo:");
    if (pop_carta1 > pop_carta2){
        printf("\nPopulação:%d, %s venceu",pop_carta1, nome_carta1);
    } else {
        printf("\nPopulação:%d, %s venceu", pop_carta2,nome_carta2);
    }
    if (area_carta1>area_carta2){
        printf("\nArea:%.2f, %s venceu",area_carta1, nome_carta1);
    } else {
        printf("\nArea:%.2f, %s venceu",area_carta2,nome_carta2);
    }
    if (densidade_carta1 < densidade_carta2){
        printf("\nDensidade: %.2f, %s venceu", densidade_carta1,nome_carta1);
    } else {
        printf("\nDensidade: %.2f, %s venceu", densidade_carta2,nome_carta2);
    }
    if (pib_carta1 > pib_carta2){
        printf("\nPIB: %.2f, %s venceu", pib_carta1,nome_carta1);
    } else {
        printf("\nPIB: %.2f, %s venceu", pib_carta2,nome_carta2);
    }
    if( pib_percarta1 > pib_percarta2){
        printf("\nPIB per Capita: %.2f, %s venceu", pib_percarta1,nome_carta1);
    } else {
        printf("\nPIB per Capita: %.2f, %s venceu", pib_percarta2,nome_carta2);
    }
    if (pt_turcarta1 > pt_turcarta2){
        printf("\nNumero de Pontos Turisticos: %d, %s venceu", pt_turcarta1,nome_carta1);
    } else {
        printf("\nNumero de Pontos Turisticos: %d, %s venceu", pt_turcarta2,nome_carta2);
    }
    if (superpower_carta1>superpower_carta2){
        printf("\nSuperpoder:%.2f, %s venceu", superpower_carta1,nome_carta1);
    } else {
        printf("\nSuperpoder:%.2f, %s venceu", superpower_carta2,nome_carta2);
    }
}

//Função Principal que chama as outras
int main(){
    carta1();
    carta2();
    telaprint();
    comparativo();

    return 0;
}

