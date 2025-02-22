#include <stdio.h>


int main(){

  /*\Declarando Variaveis*/  
  
  char estado1, estado2;
  char codcarta1[10], codcarta2[10];
  char nomecidade1[20], nomecidade2[20];
  int  populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontostu1, pontostu2;


/*\Solicitando as informações e guardando elas em variaveis*/  


/*Carta Numero 1*/

printf ("Carta 1 \n");
printf ("Digite uma letra de um estado: \n");
scanf  (" %c", &estado1);

printf ("Digite o código da carta: (A letra do estado seguida de um número de 01 a 04 Ex: A01, B03). \n");
scanf  ("%s", &codcarta1);

printf ("Digite o nome da cidade, sem espaços: \n");
scanf  ("%s", &nomecidade1);

printf ("Digite o número de habitantes da cidade: \n");
scanf  ("%d", &populacao1);

printf ("Digite a área da cidade em quilômetros quadrados: \n");
scanf  ("%f", &area1);

printf ("Digite o PIB (Produto Interno Bruto da cidade): \n");
scanf  ("%f", &pib1);

printf ("Quantos pontos turisticos tem nessa cidade: \n");
scanf  ("%d", &pontostu1);


/*\Imprimindo os dados acima da carta 1*/  


/*Carta Numero 1*/

printf ("Carta 1: \n");
printf ("Estado: %c\n", estado1);
printf ("Código: %s\n", codcarta1);
printf ("Nome da Cidade: %s\n", nomecidade1);
printf ("População: %d\n", populacao1);
printf ("Área: %.2f\n", area1);
printf ("PIB: %.2f\n", pib1);
printf ("Número de Pontos Turísticos: %d\n", pontostu1);



/*\Solicitando as informações e guardando elas em variaveis*/  


/*Carta Numero 2*/

printf ("Carta 2 \n");
printf ("Digite uma letra de um estado: \n");
scanf  (" %c", &estado2);

printf ("Digite o código da carta: (A letra do estado seguida de um número de 01 a 04 Ex: A01, B03). \n");
scanf  ("%s", &codcarta2);

printf ("Digite o nome da cidade, sem espaços: \n");
scanf  ("%s", &nomecidade2);

printf ("Digite o número de habitantes da cidade: \n");
scanf  ("%d", &populacao2);

printf ("Digite a área da cidade em quilômetros quadrados: \n");
scanf  ("%f", &area2);

printf ("Digite o PIB (Produto Interno Bruto da cidade): \n");
scanf  ("%f", &pib2);

printf ("Quantos pontos turisticos tem nessa cidade: \n");
scanf  ("%d", &pontostu2);


/*\Imprimindo os dados acima da carta 2*/  


/*Carta Numero 2*/

printf ("Carta 2: \n");
printf ("Estado: %c\n", estado2);
printf ("Código: %s\n", codcarta2);
printf ("Nome da Cidade: %s\n", nomecidade2);
printf ("População: %d\n", populacao2);
printf ("Área: %.2f\n", area2);
printf ("PIB: %.2f\n", pib2);
printf ("Número de Pontos Turísticos: %d\n", pontostu2);


return 0;


}