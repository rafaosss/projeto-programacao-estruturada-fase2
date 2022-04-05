#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Rafael.h"


int main (){

printf ("A diaria de uma UTI custa cerca de R$ 2.200. O Governo repassa R$ 1.600 por dia, o dobro que era repassado antes da pandemia,");
printf (" restando aos Estados e Municipos completar o restante.\n");

float res = 2.200 - 1.600;

printf ("\nCabe a eles arcar com o custo de R$ %.3f por dia. \n", res);

int aux = porcentGov (2.200, 1.600);
printf ("O que representa cerca de %i porcento custeado pelo Governo. ", aux);


int sobra = 100 - aux;

printf ("Sobrando ao Estado pagar %i porcento que faltam. \n", sobra);



float dias = 2.200 * 14;
printf ("\nO paciente fica internado na UTI em media por 14 dias, com o custo total de R$ %.3f \n", dias);


int *ptrvetor, vetor[30] = {151, 109, 127, 145, 136, 95, 105, 111, 84, 111, 110, 92, 84, 82, 88, 75, 68, 75, 72, 62, 57, 61, 66, 63, 60, 39, 46, 44, 47, 45};
ptrvetor = vetor;

int maior = maiorvt (ptrvetor);
int menor = menorvt (ptrvetor);
int media = mediavt (ptrvetor);

char trchT='T';
char trchU='U';
char trchI='I';

trocaChar(&trchU, &trchT);

printf ("\nNos ultimo mes no Estado do RS, houve um declinio de %i pessoas na %c%c%c, um pico de %i internados, ficando uma media de %i pessoas por dia.\n", menor, trchT, trchU, trchI, maior, media);

float valorMenor = dias * menor;
float valorMaior = dias * maior;
float valorMedia = dias * media;

printf ("\nConsiderando que as pessoas ficaram 14 dias internadas, houve um gasto de R$ %.3f no declinio.", valorMenor);
printf ("\n%.3f no pico, e o valor de %3.f na media diaria.\n", valorMaior, valorMedia);

char chU = 'u';
char chT = 't';
char chI = 'i';
char chC = 'c';

chU=letraMaiuscula(chU);
chT=letraMaiuscula(chT);
chI=letraMaiuscula(chI);
chC=letraMaiuscula(chC);

printf("\n%com esses dados, podemos observar quantas vacinas seria possivel comprar com o valor da diaria de uma %c%c%c.\n", chC, chU, chT, chI);

printf("\nLISTA DE VACINAS");
printf("\n------------------------\n");
printf(" ASTRAZENECA | R$ 15,85\n");
printf(" CORONAVAC   | R$ 58,20\n");
printf(" PFIZER      | R$ 60,20\n");
printf(" JANSSEN     | R$ 50,17\n");
printf("------------------------\n");

printf("%com o valor da diaria, podemos comprar:", chC);

float astra = 2.200 / 15.85;
float corona = 2.200 / 58.20;
float pfi = 2.200 / 60.20;
float jan = 2.200 / 50.17;

printf("\n %.3f vacinas da Astrazeneca.", astra);
printf("\n %.3f vacinas da Coronavac.", corona);
printf("\n %.3f vacinas da Pfizer.", pfi);
printf("\n %.3f vacinas da Janssen.\n", jan);

float soma = astra + corona + pfi + jan;

printf("\nPodemos comprar aproximadamente %.3f vacinas por dia.\n", soma);

printf("\n%com o valor da media de 14 dias, podemos comprar:", chC);

float mediaAstra = dias / 15.85;
float mediaCorona = dias / 58.20;
float mediaPfi = dias / 60.20;
float mediaJan = dias / 50.17;

printf("\n %.3f vacinas da Astrazeneca.", mediaAstra);
printf("\n %.3f vacinas da Coronavac.", mediaCorona);
printf("\n %.3f vacinas da Pfizer.", mediaPfi);
printf("\n %.3f vacinas da Janssen.\n", mediaJan);

soma = mediaAstra + mediaCorona + mediaPfi + mediaJan;

printf("\nPodemos comprar aproximadamente %.3f vacinas em 14 dias.\n", soma);

float mediaVacina = media * 2.200;
float interAstra = mediaVacina / 15.85;
float interCorona = mediaVacina / 58.20;
float interPfi = mediaVacina / 60.20;
float interJan = mediaVacina / 50.17;

printf("\n%com a media diaria de %i internados no ultimo mes, poderiamos comprar:", chC, media);

printf("\n %.3f vacinas da Astrazeneca.", interAstra);
printf("\n %.3f vacinas da Coronavac.", interCorona);
printf("\n %.3f vacinas da Pfizer.", interPfi);
printf("\n %.3f vacinas da Janssen.\n", interJan);

soma = interAstra + interCorona + interPfi + interJan;

printf("\n%cotalizando %.3f vacinas.\n", chT, soma);


/*
FONTES
https://infografico-covid.procempa.com.br/
https://www.cnnbrasil.com.br/saude/covid-19-internacao-em-uti-custa-quase-2-mil-vezes-mais-do-que-preco-da-vacina/#:~:text=O%20gasto%20di%C3%A1rio%20de%20uma,cerca%20de%20R%24%2031%20mil.
https://noticias.uol.com.br/saude/ultimas-noticias/redacao/2021/05/03/em-menos-de-1-ano-sus-gasta-r-3-bilhoes-com-internacoes-para-tratar-covid.htm
*/
};
