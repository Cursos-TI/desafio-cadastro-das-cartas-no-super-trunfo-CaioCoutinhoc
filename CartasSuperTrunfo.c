#include <stdio.h>

    int main(){
        int populacao1,populacao2,turisticos1,turisticos2;
        char estado1[50],estado2[50],cidade1[50],cidade2[50],codigo1[4],codigo2[4];
        float area1,area2,BIP1,BIP2;
    
     // CARTA NUMERO 1
     printf("estado da carta 1: \n");
     scanf("%s", estado1);
     printf("cidade da carta 1: \n");
     scanf("%s", cidade1);
     printf("codigo da carta 1: \n");
     scanf("%s", codigo1);
     printf("população da cidade : \n");
     scanf("%d", &populacao1);
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
     scanf("%d", &populacao2);
     printf("area da cidade :\n");
     scanf("%f", &area2);
     printf("BIP da cidade :\n");
     scanf("%f", &BIP2);
     printf("numero de pontos turisticos:\n");
     scanf("%d", &turisticos2);
    
     // DADOS OBTIDOS DAS CARTAS
    printf("\n");
    
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", BIP1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);
    
    printf("\n");
    
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", BIP2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    
     return 0;
    }


