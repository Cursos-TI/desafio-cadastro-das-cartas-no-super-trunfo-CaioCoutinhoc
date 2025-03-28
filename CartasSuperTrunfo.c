#include <stdio.h>

int main(){
    //DECLAREI AS VARIAVEIS
    unsigned long int populacao1,populacao2;
    int turisticos1,turisticos2;
    char estado1[50],estado2[50],cidade1[50],cidade2[50],codigo1[4],codigo2[4];
    float area1,area2,BIP1,BIP2,densidade1,densidade2,BIPPRCTP1,BIPPRCPT2;
    float poderA, poderB;

 // CARTA NUMERO 1
 printf("estado da carta 1: \n");
 scanf("%s", estado1);
 printf("cidade da carta 1: \n");
 scanf("%s", cidade1);
 printf("codigo da carta 1: \n");
 scanf("%s", codigo1);
 printf("população da cidade : \n");
 scanf("%ld", &populacao1);
 printf("area da cidade : \n");
 scanf("%f", &area1);
 printf("BIP da cidade : \n");
 scanf("%f", &BIP1);
 printf("numero de pontos turisticos:\n");
 scanf("%d", &turisticos1);

 // CARTA NUMERO 2
 printf("estado da carta 2:\n");
 scanf("%s", estado2);
 printf("cidade da carta 2:\n");
 scanf("%s", cidade2);
 printf("codigo da carta 2:\n");
 scanf("%s", codigo2);
 printf("população da cidade :\n");
 scanf("%ld", &populacao2);
 printf("area da cidade :\n");
 scanf("%f", &area2);
 printf("BIP da cidade :\n");
 scanf("%f", &BIP2);
 printf("numero de pontos turisticos:\n");
 scanf("%d", &turisticos2);
 


//CALCULEI A DENSIDADE POPULACIONAL
densidade1 = (float)populacao1 / area1;
densidade2 = (float)populacao2 / area2;


//CALCULEI O BIP PER CAPITA.
BIPPRCTP1= (float)BIP1 / populacao1;
BIPPRCPT2= (float)BIP2 / populacao2;

//dando poder as cartas
poderA = populacao1 + area1 + BIP1 + turisticos1 + BIPPRCTP1 + (1.0f / densidade1);
poderB = populacao2 + area2 + BIP2 + turisticos2 + BIPPRCPT2 + (1.0f / densidade2);



 //USEI (printf("\n");) PARA DAR UM ESPAÇAMENTO E FICAR MAIS VISIVEL.
printf("\n");

// IMPRIMI OS DADOS OBTIDOS DAS CARTAS
printf("Carta 1\n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %ld\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", BIP1);
printf("Número de Pontos Turísticos: %d\n", turisticos1);
printf("Densidade Populacional: %f hab/km²\n", densidade1);
printf("PIB per Capita: %f reais\n",BIPPRCTP1);
printf("Super Poder: %.2f\n", poderA);

printf("\n");

printf("Carta 2\n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %ld\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", BIP2);
printf("Número de Pontos Turísticos: %d\n", turisticos2);
printf("Densidade Populacional: %f hab/km²\n ", densidade2);
printf("PIB per Capita: %f reais\n",BIPPRCPT2);
printf("Super Poder: %.2f\n", poderB);

printf("\n");

printf("\n***COMPARAÇÃO DAS CARTAS***\n");
printf("População: %s\n", (populacao1 > populacao2) ? "Carta 1 vence" : (populacao1 < populacao2) ? "Carta 2 vence" : "Empate");
printf("Área: %s\n", (area1 > area2) ? "Carta 1 vence" : (area1 < area2) ? "Carta 2 vence" : "Empate");
printf("PIB: %s\n", (BIP1 > BIP2) ? "Carta 1 vence" : (BIP1 < BIP2) ? "Carta 2 vence" : "Empate");
printf("Número de pontos turísticos: %s\n", (turisticos1 > turisticos2) ? "Carta 1 vence" : (turisticos1 < turisticos2) ? "Carta 2 vence" : "Empate");
printf("Densidade populacional: %s\n", (densidade1 < densidade2) ? "Carta 1 vence" : (densidade1 > densidade2) ? "Carta 2 vence" : "Empate");
printf("PIB per capita: %s\n", (BIPPRCTP1 > BIPPRCPT2) ? "Carta 1 vence" : (BIPPRCTP1 < BIPPRCPT2) ? "Carta 2 vence" : "Empate");
printf("Super Poder: %s\n", (poderA > poderB) ? "Carta 1 vence" : (poderA < poderB) ? "Carta 2 vence" : "Empate");

return 0;
}


