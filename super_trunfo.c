#include <stdio.h>

int main(){
    int carta1, pontostur1, populacao1;
    char estado1[30], codigo1[30], cidade1[30];
    float pib1, area1;
    
        /* Dados Referente a primeira carta: Carta, Estado, 
        Código, Nome da Cidade, População, Área: em km², PIB 
        em bilhões de reais, Número de Pontos Turísticos.*/

    printf("Preencha os dados do Super Trunfo: \nDigite o número da Carta: ");
    scanf("%d", &carta1);

    printf("Digite o Estado: ");
    scanf("%s", &estado1);

    printf("Digite o Código: ");
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontostur1);
    
        /*Associando ad informações que será solicitada ao usuário 
        as respectivas referências dentro do programa, (dados de
        entrada e saída)*/

    int carta2, pontostur2, populacao2;
    char estado2[30], codigo2[30], cidade2[30];
    float pib2, area2;
    
        /* Dados Referente a segunda carta: Carta, Estado, 
        Código, Nome da Cidade, População, Área: em km², PIB 
        em bilhões de reais, Número de Pontos Turísticos.*/
  
    printf("\nPreencha os dados do Super Trunfo novamente: \nDigite o número da Carta: ");
    scanf("%d", &carta2);

    printf("Digite o Estado: ");
    scanf("%s", &estado2);

    printf("Digite o Código: ");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontostur2);
    
    /*Associando ad informações que será solicitada ao usuário 
    as respectivas referências dentro do programa, (dados de
    entrada e saída)*/

    printf("\nCarta: %d \n", carta1);
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontostur1);

    printf("\nCarta: %d \n", carta2);
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontostur2);

    /*Resultado a ser mostrado para o usuário em lista com as 
    respectivas informações preenchidas da primeira e segunda carta*/

    return 0;
    
}