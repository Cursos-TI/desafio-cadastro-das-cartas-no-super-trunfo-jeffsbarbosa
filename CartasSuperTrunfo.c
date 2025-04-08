#include <stdio.h>

int main(){

    char estado1[50], estado2[50], codigocarta1[50], codigocarta2[50], nomedacidade1[50], nomedacidade2[50]; 
    unsigned long int populacaocarta1, populacaocarta2;
    int numerodepontosturisticoscarta1, numerodepontosturisticoscarta2; 
    float areacarta1, pibcarta1, areacarta2, pibcarta2, densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2, superpodercarta1, superpodercarta2;

    //Início do Programa
    
    printf("Super Trunfo\n\n");
    
    printf("Olá! Seja Bem-Vindo ao game Super Trunfo!\n\n Por gentileza, insira os dados da Carta 01:\n\n");

    //INSERÇÃO DOS DADOS DA CARTA 01//

    printf("Estado: ");
    scanf(" %[^\n]", estado1);
    
    printf("Código da Carta: ");
    scanf(" %[^\n]", codigocarta1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomedacidade1);
    
    printf("População: ");
    scanf("%d", &populacaocarta1);
    
    printf("Área (em Km²): ");
    scanf("%f", &areacarta1);
    
    printf("PIB: ");
    scanf("%f", &pibcarta1);
    
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &numerodepontosturisticoscarta1);

   //Cálculos da carta 01 referente a densidade populacional e pib per capita

   densidadepopulacional1 = (float)(populacaocarta1 / areacarta1);
   pibpercapita1 = (float)(pibcarta1 / populacaocarta1);
   superpodercarta1 = (float)(populacaocarta1 + areacarta1 + pibcarta1 + numerodepontosturisticoscarta1 
   + pibpercapita1 + densidadepopulacional1);

   printf("\n");

   //INSERÇÃO DOS DADOS DA CARTA 02//

    printf("Agora, por gentileza, insira os dados da carta 02\n\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado2);
    
    printf("Código da Carta: ");
    scanf(" %[^\n]", codigocarta2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomedacidade2);
    
    printf("População: ");
    scanf("%d", &populacaocarta2);
    
    printf("Área (em Km²): ");
    scanf("%f", &areacarta2);
    
    printf("PIB: ");
    scanf("%f", &pibcarta2);
    
    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &numerodepontosturisticoscarta2);

    //Cálculos da carta 02 referente a densidade populacional e pib per capita

    densidadepopulacional2 = (float)(populacaocarta2 / areacarta2);
    pibpercapita2 = (float)(pibcarta2 / populacaocarta2);
    superpodercarta2 = (float)(populacaocarta2 + areacarta2 + pibcarta2 + numerodepontosturisticoscarta2 
        + pibpercapita2 + densidadepopulacional2);

    //finalização de preenchimento da entrada de dados.

    printf("\n\n****************************************************************\n\n");

    printf("CARTA 01: \n\n");

    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacaocarta1);
    printf("Área:  %.2f Km²\n", areacarta1);
    printf("PIB: %.2f Bilhões de Reais\n", pibcarta1);
    printf("Nº Pontos Turísticos: %d\n", numerodepontosturisticoscarta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais por pessoa\n", pibpercapita1);
    
    

    printf("\n\n****************************************************************\n\n");



    printf("CARTA 02: \n\n");

    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacaocarta2);
    printf("Área:  %.2f Km²\n", areacarta2);
    printf("PIB: %.2f Bilhões de Reais\n", pibcarta2);
    printf("Nº Pontos Turísticos: %d\n", numerodepontosturisticoscarta2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais por pessoa\n\n", pibpercapita2);

    //Comparação das cartas

    printf("***COMPARAÇÃO DAS CARTAS***\n\n");

    // Comparação de População
    printf("População: Carta 1 venceu (%d)\n", populacaocarta1 > populacaocarta2);

    // Comparação de Área
    printf("Área: Carta 1 venceu %d)\n", areacarta1 > areacarta2);

    // Comparação de PIB
    printf("PIB: Carta 1 venceu (%d)\n", pibcarta1 > pibcarta2);

    // Comparação de Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", numerodepontosturisticoscarta1 > numerodepontosturisticoscarta2);

    // Comparação de Densidade Populacional (quanto menor a densidade, maior o "poder")
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2);

    // Comparação de PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);

    // Comparação de Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", superpodercarta1 > superpodercarta2);

    return 0;

    //FIM DO PROGRAMA
}