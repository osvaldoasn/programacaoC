#include <stdio.h>;

int main(){

    //VARIAVEIS CARTA 01
    char estado01[2], codcarta01[3], nomecidade01[50];
    int populacao01, pontostur01;
    float areakm01, pib01;

    //VARIAVEIS CARTA 02
    char estado02[2], codcarta02[3], nomecidade02[50];
    int populacao02, pontostur02;
    float areakm02, pib02;

    //DADOS CARTA 01
    printf("Digite o código da carta 01: \n");
    scanf("%s", codcarta01);

    printf("Digite o estado da carta 01: \n");
    scanf(" %s", estado01);

    printf("Digite a cidade da carta 01: \n");
    scanf(" %s", nomecidade01);

    printf("Digite a população da carta 01: \n");
    scanf(" %d", &populacao01);

    printf("Digite a área da carta 01: \n");
    scanf("%f", &areakm01);

    printf("Digite o PIB da carta 01: \n");
    scanf("%f", &pib01);

    printf("Digite o número de pontos turísticos da carta 01: \n");
    scanf("%d", &pontostur01);


    //IMPRIMIR DADOS CARTA 01
    printf("\n\nDADOS DA CARTA 01\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n\n\n", estado01, codcarta01, nomecidade01, populacao01, areakm01, pib01, pontostur01);

    
    //DADOS CARTA 02
    printf("Digite o código da carta 02: \n");
    scanf("%s", codcarta02);

    printf("Digite o estado da carta 02: \n");
    scanf(" %s", estado02);

    printf("Digite a cidade da carta 02: \n");
    scanf(" %s", nomecidade02);

    printf("Digite a população da carta 02: \n");
    scanf(" %d", &populacao02);

    printf("Digite a área da carta 02: \n");
    scanf("%f", &areakm02);

    printf("Digite o PIB da carta 02: \n");
    scanf("%f", &pib02);

    printf("Digite o número de pontos turísticos da carta 02: \n");
    scanf("%d", &pontostur02);


    //IMPRIMIR DADOS CARTA 02
    printf("\n\nDADOS DA CARTA 02\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n\n\n", estado02, codcarta02, nomecidade02, populacao02, areakm02, pib02, pontostur02);


}