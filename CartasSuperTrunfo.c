#include <stdio.h>

int main(){

    //nessa primeira parte, o usuário irá inserir os dados de duas cartas

    char estado1[50], estado2[50], codigocarta1[50], codigocarta2[50], nomedacidade1[50], nomedacidade2[50]; 
    int populacaocarta1, numerodepontosturisticoscarta1, populacaocarta2, numerodepontosturisticoscarta2; 
    float areacarta1, pibcarta1, areacarta2, pibcarta2;   


    printf("Desafio Novato - Super Trunfo\n\n");
    
    printf("Olá! Por gentileza, insira os dados da Carta 01:\n\n");

    printf("Estado: ");
    scanf("%s", estado1);
    
    printf("Código da Carta: ");
    scanf("%s", codigocarta1);
    
    printf("Nome da Cidade: ");
    scanf("%s", nomedacidade1);
    
    printf("População: ");
    scanf("%d", &populacaocarta1);
    
    printf("Área (em Km²): ");
    scanf("%f", &areacarta1);
    
    printf("PIB: ");
    scanf("%f", &pibcarta1);
    
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &numerodepontosturisticoscarta1);

    /*A partir daqui começa o preenchimento dos dados da carta 02*/

    printf("Agora, por gentileza, insira os dados da carta 02\n");

    printf("Estado: ");
    scanf("%s", estado2);
    
    printf("Código da Carta: ");
    scanf("%s", codigocarta2);
    
    printf("Nome da Cidade: ");
    scanf("%s", nomedacidade2);
    
    printf("População: ");
    scanf("%d", &populacaocarta2);
    
    printf("Área (em Km²): ");
    scanf("%f", &areacarta2);
    
    printf("PIB: ");
    scanf("%f", &pibcarta2);
    
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &numerodepontosturisticoscarta2);

    printf("\n\n****************************************************************\n\n");

    printf("CARTA 01: \n\n");

    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacaocarta1);
    printf("Área (em Km²): %f\n", areacarta1);
    printf("PIB: %.2f\n", pibcarta1);
    printf("Nº Pontos Turísticos: %d\n", numerodepontosturisticoscarta1);

    printf("\n\n****************************************************************\n\n");

    printf("CARTA 02: \n\n");

    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacaocarta2);
    printf("Área (em Km²): %f\n", areacarta2);
    printf("PIB: %.2f\n", pibcarta2);
    printf("Nº Pontos Turísticos: %d\n", numerodepontosturisticoscarta2);

    return 0;
}
