#include <stdio.h>

int main ()
{
// Desafio II - Nível Aventureiro

//Calcular a densidade populacional da cidade dividindo a população pela área.
//Calcular o PIB per Capita dividindo o PIB pela população.
//Exibir os resultados: Densidade Populacional / PIB per Capita. 

//Variáveis declaradas
char estado1, estado2;
char cod1_carta[05], cod2_carta[05];
char cidade1[20], cidade2[20];
float populacao1, populacao2;;
float area1, area2;
float PIB1, PIB2;
int pontos_turis1, pontos_turis2;
float densidade_populacional1, densidade_populacional2;
float PIBcapita1, PIBcapita2;


//CARTA 1
printf(" *** CARTA 01 ***\n");
printf("Digite a letra do seu estado (de A a H): ");
scanf(" %c", &estado1);

printf("Digite o código da carta (de 1 a 4): ");
scanf( "%s", &cod1_carta);

printf("Digite o nome da cidade: ");
scanf(" %s", cidade1);

printf("Digite o número de habitantes da cidade: ");
scanf( "%f", &populacao1);

printf("Digite a área da cidade em quilômetros quadrados: ");
scanf(" %f", &area1);

printf("Digite o PIB (produto interno bruto) da cidade: ");
scanf( "%f", &PIB1);

printf("Digite a quantidade de pontos turísticos da cidade: ");
scanf(" %d", &pontos_turis1);
printf("\n");

//Cálculos
densidade_populacional1 = populacao1 / area1;
PIBcapita1 = PIB1 / populacao1;

printf("CARTA 1\n");
printf("Estado: %c\n", estado1);
printf("Código: A0%s\n", cod1_carta);
printf("Nome da cidade: %s\n", cidade1);
printf("População: %f habitantes\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", PIB1);
printf("Número de pontos turísticos: %d\n", pontos_turis1);
printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional1);
printf("PIB per Capita: %.2f reais\n", PIBcapita1);
printf("\n");

//CARTA 2
printf(" *** CARTA 02 ***\n");
printf("Digite a letra do seu estado (de A a H): ");
scanf(" %c", &estado2);

printf("Digite o código da carta (de 1 a 4): ");
scanf( "%s", &cod2_carta);

printf("Digite o nome da cidade: ");
scanf(" %s", cidade2);

printf("Digite o número de habitantes da cidade: ");
scanf( "%f", &populacao2);

printf("Digite a área da cidade em quilômetros quadrados: ");
scanf(" %f", &area2);

printf("Digite o PIB (produto interno bruto) da cidade: ");
scanf( "%f", &PIB2);

printf("Digite a quantidade de pontos turísticos da cidade: ");
scanf(" %d", &pontos_turis2);
printf("\n");

//Cáculos
densidade_populacional2 = populacao2 / area2;
PIBcapita2 = PIB2 / populacao2;

printf("CARTA 2\n");
printf("Estado: %c\n", estado1);
printf("Código: A0%s\n", cod1_carta);
printf("Nome da cidade: %s\n", cidade1);
printf("População: %f habitantes\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", PIB1);
printf("Número de pontos turísticos: %d\n", pontos_turis2);
printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional2);
printf("PIB per Capita: %.2f reais\n", PIBcapita2);
printf("\n");

return 0;

}
